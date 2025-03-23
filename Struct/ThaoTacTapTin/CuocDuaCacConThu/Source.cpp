#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

#define SUTU_THOIGIANBATDAU 9
#define THO_THOIGIANBATDAU 8
#define RUA_THOIGIANBATDAU 7

#define SUTU_QUANGDUONGCHAY 210 
#define THO_QUANGDUONGCHAY 210 
#define RUA_QUANGDUONGCHAY 135

struct ConVat {
    string MaSo;
    int TocDo, TrangBi;
};
typedef struct ConVat CONVAT;

void NhapConVat(ifstream& FileIn, CONVAT& cv) {
    if (!(FileIn >> cv.MaSo >> cv.TocDo >> cv.TrangBi)) {
        cerr << "Loi: Khong the doc du lieu con vat!\n";
    }
}

void XuatConVat(ofstream& FileOut, CONVAT cv) {
    FileOut << cv.MaSo << " " << cv.TocDo << " " << cv.TrangBi << endl;
}

void NhapDanhSach(ifstream& FileIn, vector<CONVAT>& DanhSach) {
    int n;
    if (!(FileIn >> n)) {
        cerr << "Loi: Khong the doc so luong con vat!\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        CONVAT cv;
        NhapConVat(FileIn, cv);
        DanhSach.push_back(cv);
    }
}

void XuatDanhSach(ofstream& FileOut, const vector<CONVAT>& DanhSach) {
    for (const auto& cv : DanhSach) {
        XuatConVat(FileOut, cv);
    }
}

int TimVanTocThucSu(CONVAT cv){
    // su tu 
    if (cv.MaSo[0] == 'L') {
        if (cv.TrangBi == 1) {
            return cv.TocDo * 2;
        }
        else {
            return cv.TocDo;
        }
    }
    else if (cv.MaSo[0] == 'T') {
        if (cv.TrangBi == 1) {
            return cv.TocDo  + 30;
        }
        else {
            return cv.TocDo;
        }
    }
    else if (cv.MaSo[0] == 'R') {
        if (cv.TrangBi == 1) {
            return cv.TocDo * 5;
        }
        else {
            return cv.TocDo;
        }
    }

}

double TimThoiGianDiHetQuangDuong(CONVAT cv){
    int tocdothatsu = TimVanTocThucSu(cv);
    if (cv.MaSo[0] == 'L') {
        return (double)SUTU_QUANGDUONGCHAY / tocdothatsu;
    }  
    else  if (cv.MaSo[0] == 'T') {
        return (double)RUA_QUANGDUONGCHAY / tocdothatsu;
    }
    else  if (cv.MaSo[0] == 'R') {
        return (double)THO_QUANGDUONGCHAY / tocdothatsu;
    }
}
double TimThoiGianVeDich(CONVAT cv) {
    double ThoiGianChay = TimThoiGianDiHetQuangDuong(cv);
    if (cv.MaSo[0] == 'L') {
        return SUTU_QUANGDUONGCHAY+ ThoiGianChay;
    }
    else  if (cv.MaSo[0] == 'T') {
        return RUA_QUANGDUONGCHAY + ThoiGianChay;
    }
    else  if (cv.MaSo[0] == 'R') {
        return THO_QUANGDUONGCHAY + ThoiGianChay;
    }
}
void HoanVi(CONVAT& a, CONVAT& b) {
    CONVAT Temp = a;
    a = b;
    b = Temp;
}

void SapXepDanhSach(vector<CONVAT> &DanhSach) {
    int n = DanhSach.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (TimThoiGianVeDich(DanhSach[i]) > TimThoiGianVeDich(DanhSach[j])) {
                HoanVi(DanhSach[i], DanhSach[j]);// boi vi moi danh sach la con vat  
            }
        }
    }
}
int main() {
    ifstream FileIn("INPUT.txt");
    if (!FileIn) {
        cerr << "Loi: Khong tim thay tap tin INPUT.TXT\n";
        return 1;
    }

    vector<CONVAT> DanhSach;
    NhapDanhSach(FileIn, DanhSach);
    FileIn.close();

    ofstream FileOut("OUTPUT.txt");
    if (!FileOut) {
        cerr << "Loi: Khong the tao file OUTPUT.TXT!\n";
        return 1;
    }

    XuatDanhSach(FileOut, DanhSach);
    FileOut.close();

    return 0;
}
