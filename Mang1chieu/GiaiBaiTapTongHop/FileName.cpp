#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define max 100
void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("\nNhap vao a[%lf]:", i);
		scanf_s("%d", &a[i]);
	}
}
void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i]);

	}
}
void NhapMang(double a[], double n) {
	for (int i = 0; i < n; i++) {
		printf("\nNhap vao a[%lf]:", i);
		scanf_s("%lf", &a[i]);
	}
}
void XuatMang(double a[], double n) {
	for (int i = 0; i < n; i++) {
		printf("%lf", a[i]);

	}
}
//Bài 132 / 57 / SBT Thầy NTTMK : Viết hàm liệt kê các giá trị chẵn trong mảng một
//chiều các số nguyên.
void LietKeCacSoChan(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			printf("%4d", a[i]);
		}
	}
}
//Bài 133/57/SBT Thầy NTTMK:Viết hàm liệt kê các vị trí mà giá trị tại đó là giá trị
//âm trong mảng một chiều các số thực.
void LietKeCacSoAm(double a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			printf("%lf", a[i]);
		}
	}
}
//Bài 134 / 58 / SBT Thầy NTTMK : Viết hàm tìm "giá trị lớn nhất" trong mảng một
//chiều các số thực
double TimMax(double a[], int n) {
	double Max = a[0];
	for (int i = 0; i < n; i++) {
		if (Max < a[i]) {
			Max = a[i];
		}
	}
	return Max;
}
//Bài 135/58/SBT Thầy NTTMK:Cách 1:Tìm "giá trị dương đầu tiên" trong mảng 
//một chiều các số thực.Nếu mảng không có giá trị dương thì trả về giá trị - 1.
double TimDuongDauTien(double a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] >= 0) {
			return a[i];
		}
	}
	return -1;
}
//Bài 136 / 58 / SBT Thầy NTTMK : Tìm "số chẵn cuối cùng" trong mảng một chiều
//các số nguyên.Nếu mảng không có giá trị chẵn thì trả về giá trị - 1.
int TimSoChanCuoiCung(int a[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] % 2 == 0) {
			return a[i];
		}
	}
	return -1;
}
//Bài 137 / 58 / SBT Thầy NTTMK : Tìm "một vị trí mà giá trị tại vị trí đó là giá trị nhỏ
//nhất" trong mảng một chiều các số thực.

double TimViTriMin(double a[], int n) {
	int Min = a[0];
	int vitri = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] < Min) {
			Min = a[i];
			vitri = i;
		}
	}
	return vitri;
}
//Bài 138 / 58 / SBT Thầy NTTMK : Tìm "vị trí của giátrị chẵn đầu tiên" trong mảng
//một chiều các số nguyên.Nếu mảng không có giá trị chẵn thì hàm sẽ trả về - 1.
int TimViTriChanDautien(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			return i;// tìm vị trí thì ta trả về i còn giá trị thì ta trả về a[i]
		}
	}
	return -1;
}
//Bài 139 / 58 / SBT Thầy NTTMK : Tìm "vị trí số hoàn thiện cuối cùng" trong mảng
//một chiều các số nguyên.Nếu mảng không có số hoàn thiện thì trả về giá trị - 1

int KiemTraHoanThien(int x) {
	int tong = 0;
	for (int i = 0; i < x / 2; i++) {
		if (x % i == 0) {
			tong += i;
		}
	}
	return tong == x;
}
int TimViTriHoanThienCuoiCung(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (KiemTraHoanThien(a[i]) == 1) {
			return i;// đây là vị trí chứ không phải giá trị 
		}
	}
	return -1;
}
//Bài 140 - 141 / 58 / SBT Thầy NTTMK : Hãy tìm "giá trị dương nhỏ nhất và vị trí của 
//nó" trong mảng một chiều các số thực.Nếu mảng không có giá trị dương thì trả về -
//1.
void GiaTriDuongNhoNhat(double a[], int n, double& MinDuong, int& ViTri) {
	MinDuong = a[0];
	ViTri = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0 && a[i] < a[0]) {
			MinDuong = a[i];
			ViTri = i;
		}

	}

}
//Bài 142 / 59 / SBT Thầy NTTMK : Tìm "giá trị nhỏ nhất" trong mảng một chiều các
//số thực.adsfkasjfd

double timGiatriNhoNhat(double a[], int n) {
	double Min = a[0];
	for (int i = 0; i < n; i++) {
		if (Min < a[i]) {
			Min = a[i];
		}
	}
	return Min;
}
//Bài 143 / 59 / SBT Thầy NTTMK : Viết hàm tìm "số chẵn đầu tiên" trong mảng một
//chiều các số nguyên.Nếu mảng không có giá trị chẵn thì hàm sẽ trả về giá trị không
//chẵn là - 1.
int GiaTrichanDauTien(int a[], int n) {
	int giaTri = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0 && a[i] % 2 == 0) {
			giaTri = a[i];
		}
	}
	return giaTri;
}
//Bài 144 / 59 / SBT Thầy NTTMK : Tìm "số nguyên tố đầu tiên" trong mảng một chiều
//các số nguyên.Nếu mảng không có số nguyên tố thì trả về giá trị - 1
int KiemTraNguyenTo(int x) {
	if (x < 2) {
		return -1;
	}
	if (x == 2) {
		return 1;
	}
	if (x % 2 == 0) {
		return -1;
	}
	for (int i = 3; i <= sqrt(x); i += 2) {
		if (x % i == 0) {
			return -1;
		}
	}
	return 1;

}
int TimSoNguyenToDauTien(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (KiemTraNguyenTo(a[i]) == 1) {
			return a[i];
		}
	}
	return -1;
}
//Bài 145 / 59 / SBT Thầy NTTMK : Tìm "số hoàn thiện đầu tiên" trong mảng một
//chiều các số nguyên.Nếu mảng không có số hoàn thiện thì trả về giá trị - 1
int isPerfect(int num) {
	int sum = 0;
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	return sum;
}
int TimSoHoanThien(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (isPerfect(a[i]) == 1) {
			return a[i];
		}
	}
	return -1;
}
//Bài 146 / 59 / SBT Thầy NTTMK : Tìm "giá trị âm đầu tiên" trong mảng một chiều
//các số thực.Nếu mảng không có giá trị âm thì trả về giá trị - 1.
double timGiaTriAmDauTien(double a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			return a[i];
		}
	}
	return -1;
}
//Bài 147 / 59 / SBT Thầy NTTMK : Tìm "số dương cuối cùng" trong mảng một chiều
//các số thực.Nếu mảng không có giá trị dương thì trả về giá trị - 1
double timsoDuongCuoiCung(double a[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] > 0) {
			return a[i];
		}
	}
	return -1;
}
//Bài 148 / 60 / SBT Thầy NTTMK : Tìm "số nguyên tố cuối cùng" trong mảng một
//chiều các số nguyên.Nếu mảng không có số nguyên tố thì trả về giá trị - 1
int KiemTraSonguyento(int num) {
	if (num < 2) {
		return -1;
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return -1;
		}
	}
	return 1;
}

int findSoNguyenToCuoiCung(int arr[], int size) {
	int lastPrime = -1;
	for (int i = 0; i < size; i++) {
		if (KiemTraSonguyento(arr[i]) == 1) {
			lastPrime = arr[i];
		}
	}
	return lastPrime;
}
//Bài 149 / 60 / SBT Thầy NTTMK : Tìm "số hoàn thiện cuối cùng" trong mảng một
//chiều các số nguyên.Nếu mảng không có số hoàn thiện thì trả về giá trị - 1.
int isPerfectt(int num) {
	int sum = 0;
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	return sum;
}
int TimmotSoHoanThienBai149(int a[], int n) {
	for (int i = n - 1; i >= 0; i++) {
		if (isPerfectt(a[i]) == 1) {
			return a[i];
		}
	}
	return -1;
}
//Bài 150 / 60 / SBT Thầy NTTMK : Hãy tìm "giá trị âm lớn nhất" trong mảng các số
//thực.Nếu mảng không có giá trị âm thì trả về giá trị 0.
int TimViTriAmDauTien(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			return i;
		}
	}
	return -1;
}
int TimsoAmMAX(int a[], int n) {
	int viTri = TimViTriAmDauTien(a, n);
	int amMax = a[viTri];
	for (int i = 1; i < n; i++) {
		if (a[i] < 0 && a[i] > amMax) {
			amMax = a[i];
		}
	}
	return amMax;
}
//Bài 151 / 60 / SBT Thầy NTTMK : Hãy tìm "số nguyên tố lớn nhất" trong mảng một
//chiều các số nguyên.Nếu mảng không có số nguyên tố thì trả về giá trị 0.
int KiemTraSoNguyenToNe(int num) {
	if (num <= 1) {
		return false;
	}

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return -1;
		}
	}

	return 1;
}
int TimSoNguyenToLonNhat(int a[], int n) {
	int Max = a[0];
	for (int i = 0; i < n; i++) {
		if (KiemTraSoNguyenToNe(a[i]) == 1 && a[i] > Max) {
			Max = a[i];
		}
	}
	return Max;
}
//Bài 152 / 60 / SBT Thầy NTTMK : Hãy tìm "số hoàn thiện nhỏ nhất" trong mảng một
//chiều các số nguyên.Nếu mảng không có số hoàn thiện thì trả về giá trị 0.
int issPerfect(int num) {
	int sum = 0;
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	return sum;
}
int TimSoHoanThien000(int a[], int n) {
	int Min = a[0];

	for (int i = n - 1; i >= 0; i--) {
		if (issPerfect(a[i]) > a[i]) {
			return Min = a[i];
		}
	}
	return 0;
}
//Bài 153 / 60 / SBT Thầy NTTMK : Hãy tìm "giá trị chẵn nhỏ nhất" trong mảng một
//chiều các số nguyên.Nếu mảng không có giá trị chẵn thì trả về giá trị không chẵn
//là - 1.
int timGiatrichanNhoNhat(int a[], int n) {
	int MinChan = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < MinChan && MinChan % 2 == 0) {
			return MinChan;
		}
	}
	return -1;
}
//Bài 154 / 60 / SBT Thầy NTTMK : Hãy tìm "vị trí giá trị âm lớn nhất" trong mảng các
//số thực.Nếu mảng không có giá trị âm thì trả về - 1.
double timGiatriamDautien(double a[], int x) {

	for (int i = 0; i < x; i++) {
		if (a[i] < 0) {
			return a[i];
		}
	}
	return -1;
}
double TimGiatriamLonNhat(double a[], int n) {
	int Maxam = timGiatriamDautien(a, n);
	int Vitri = 0;
	for (int i = 1; i < n; i++) {
		if (Maxam < a[i] && Maxam < 0) {
			return a[i];
			Vitri = i;
		}
	}
	return -1;
}
//Bài 155 / 61 / SBT Thầy NTTMK : Hãy tìm giá trị trong mảng các số thực "xa giá trị x 
//nhất".
// trị tuyệt đối của số nguyên là abs 
// trị tuyệt đối của sô thực là fabs 
double TimGiaTriXaNhat(double a[], int n, double x) {
	double Max = fabs(a[0] - x);
	int vitri = 0;
	for (int i = 1; i < n; i++) {
		if (fabs(a[i] - x) > Max) {
			Max = fabs(a[i] - x);// chính là khoảng cách xa nhất ví dụ 1-9 là 8 và 1- 8 là 7 
			vitri = i;
		}
	}
	return a[vitri];// trả về giá trị 
}
//Bài 156 / 61 / SBT Thầy NTTMK : Hãy tìm một vị trí trong mảng một chiều các số
//thực mà giá trị tại vị trí đó là giá trị "gần giá trị x nhất".
double TimGiaTriGanNhat(double a[], int n, double x) {
	double Min = fabs(a[0] - x);
	int vitri = 0;
	for (int i = 1; i < n; i++) {
		if (fabs(a[i] - x) < Min) {
			Min = fabs(a[i] - x);// chính là khoảng cách gần nhất ví dụ 1-9 là 8 và 1- 8 là 7 
			vitri = i;
		}
	}
	return a[vitri];// trả về giá trị 
}
//Bài 157 / 61 / SBT Thầy NTTMK : Cho mảng một chiều các số thực, hãy tìm đoạn
//[a, b] sao cho đoạn này chứa tất cả các giá trị trong mảng
// Thực chất là tìm min max 
void TimDoanA_B(double a[], double n, double& Min, double& Max) {
	Min = a[0];
	Max = a[0];
	for (int i = 0; i < n; i++) {
		if (Max > a[i]) {
			Max = a[i];
		}
		else if (Min < a[i]) {
			Min = a[i];
		}
	}
	;
}
//Bài 158 / 61 / SBT Thầy NTTMK : Cho mảng một chiều các số thực, hãy tìm giá trị x
//sao cho đoạn[-x, x] chứa tất cả các giá trị trong mảng.
/// ý tưởng : biến hết thành trị tuyệt đối và tìm max 
double TimGiaTrix(double a[], int n) {
	double Max = fabs(a[0]);
	for (int i = 0; i < n; i++) {
		// sau đó biến tất cả các giá trị trong này thành trị tuyệt đối :fabs(a[i])

		if (Max < fabs(a[i])) {
			Max = fabs(a[i]);
		}
	}
	return Max;
}
//Bài 159 / 61 / SBT Thầy NTTMK : Cho mảng một chiều các số thực, hãy tìm giá trị
//đầu tiên lớn hơn giá trị 2003.Nếu mảng không có giá trị thỏa điều kiện trên thì hàm
//sẽ trả về giá trị là 0
//ý tưởng : duyệt vòng lặp gặp 2003 thì return về 
double TimGiaTriLonHon2003(double a[], int n) {
	double result = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 2003) {
			result = a[i];
			break;
			// thực hiện xong phải break ra ngay nếu không nó sẽ trả về thằng nào lớn nhất 
		}
	}
	return result;
}
//Bài 160 / 62 / SBT Thầy NTTMK : Cho mảng một chiều các số thực hãy viết hàm tìm
//giá trị âm cuối cùng lớn hơn giá trị - 1.Nếu mảng không có giá trị thỏa điều kiện
//trên thì hàm sẽ trả về giá trị không chẵn là 0 .
double TraVeGiaTriAmLonHon_1(double a[], int n) {
	for (int i = n - 1; i >= 0; i--) {

		if (a[i] < 0 && a[i] > -1) {
			return a[i];
		}
	}
	return 0;
}
//Bài 161 / 62 / SBT Thầy NTTMK : Cho mảng một chiều các số nguyên hãy tìm giá trị
//đầu tiên trong mảng nằm trong khoảng(x, y) cho trước.Nếu mảng không có giá trị
//thỏa điều kiện trên thì hàm trả về giá trị là x.
int TimGiaTriDauTienThoa(int a[], int n, int x, int y) {
	for (int i = 0; i < n; i++) {
		if (a[i] > x && a[i] < y) {
			return a[i];
		}
	}
	return x;
}
//Bài 162 / 62 / SBT:Cho mảng một chiều các số thực.Hãy viết hàm tìm một vị trí
//trong mảng thỏa hai điều kiện : Có hai giá trị lân cận và giá trị tại vị trí đó bằng tích
//hai giá trị lân cận.Nếu như mảng không tồn tại giá trị như vậy thì hàm trả về giá trị
//- 1.
int TimViTriLancanThoa(double a[], int n) {
	// ta chỉ chạy từ 1 cho đến cuối 
	// vd 2 10 5 vì 2 * 5 = 10 
	//(a[i - 1] , a[i + 1] là số liền trước và số liền sau a[i]
	for (int i = 1; i = n - 1; i++) {
		if (a[i - 1] * a[i + 1] == a[i]) {
			return i;
		}
	}
	return -1;
}

//Bài 163 / 62 / SBT: Tìm số chính phương đầu tiên trong mảng một chiều các số
//nguyên
int KiemTraSoChinhPhuong(int x) {
	if (x > 0 && sqrt(x) * sqrt(x) == x) {
		return 1;// true 
	}
	return -1;

}
void timSochinhPhuong(int a[], int n, int& x) {
	x = -1;
	for (int i = 0; i < n; i++) {
		if (KiemTraSoChinhPhuong(a[i]) == 1)
			x = a[i];
		break;

	}


}
//Bài 164 / 62 / SBT Thầy NTTMK : Cho mảng một chiều các số nguyên hãy viết hàm
//tìm giá trị đầu tiên trong mảng thỏa tính chất số gánh.(ví dụ : 12321)// số đối xứng 
int tinh_tich_cac_chu_so(int num) {
	int tich = 1;
	while (num > 0) {
		int chu_so = num % 10;
		tich *= chu_so;
		num /= 10;
	}
	return tich;
}

int tim_so_ganh_dau_tien(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == tinh_tich_cac_chu_so(arr[i])) {
			return arr[i];
		}

	}
	return -1; // Trường hợp không tìm thấy số gánh

}
//Bài 165 / 62 / SBT Thầy NTTMK : Hãy tìm giá trị đầu tiên trong mảng một chiều các
//số nguyên có chữ số đầu tiên là chữ số lẻ.Nếu mảng không tồn tại giá trị như vậy
//thì hàm sẽ trả về giá trị 0.
// 
//vd: mảng là : 2 25 3567 100 985
//= > giá trị đầu tiên có chữ số đầu tiên là số lẻ chính là số 3567
//
//ý tưởng : 3567 có 4 chữ số
//3567 / (10 ^ 3) = 3
//
//vậy thì xét 1 số bất kỳ, lấy số đó chia cho 10 ^ (số chữ số - 1) thì sẽ ra được chữ số đầu tiên

int TimChuSodauTienthoa(int a[], int n) {
	for (int i = 0; i < n; i++) {
		int soChuSo = log10(double(a[i])) + 1;
		if (int(a[i] / pow(10.0, soChuSo - 1)) % 2 != 0) {/// chia cái này sẽ lấy ra được số đầu tiên 
			return a[i];
		}
	}
	return 0;
}
//Bài 166 / 63 / SBT Thầy NTTMK : Cho mảng một chiều các số nguyên.Hãy viết hàm
//tìm giá trị đầu tiên trong mảng có dạng 2 ^ k.Nếu mảng không tồn tại giá trị có dạng
//2 ^ k thì hàm sẽ trả về giá trị 0.
int KiemTra(int x, int a) {/// a ở đây l9à hệ số 2 
	double ketqua = log10((double)x) / log10((double)a);
	return ketqua = (int)ketqua;
}
int TimGiaTriDauTienCoDang2MuK(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		// kiểm tra a[i] có dạng 2^k
		if (KiemTra(a[i], 2) == 1)
		{
			return a[i];
		}
	}
	return 0;
}
//Bài 167 / 63 / SBT Thầy NTTMK : Hãy tìm giá trị thỏa điều kiện toàn chữ số lẻ và là
//giá trị lớn nhất thỏa điều kiện ấy trong mảng một chiều các số nguyên(nếu mảng
//	không có giá trị nào thỏa điều kiện như trên thì hàm sẽ trả về giá trị 0)
int KiemTraToanLe(int x) {
	while (x != 0) {
		int chuso = x % 10;
		x /= 10;// để bỏ đằng sau 
		if (chuso % 2 == 0) {
			return 0;// sai 
		}
	}
	return 1;
}
int KiemTraToanChuSoLeLonNhat(int a[], int n) {
	int Max = 0;
	for (int i = 0; i < n; i++) {
		if (KiemTraToanLe(a[i]) == 1 && a[i] > Max) {
			Max = a[i];
		}
	}
	return Max;
}
//Bài 168 / 63 / SBT Thầy NTTMK : Cho mảng một chiều các số nguyên.Hãy viết hàm
//tìm giá trị lớn nhất trong mảng có dạng 5 ^ k.Nếu mảng không tồn tại giá trị có dạng
//5 ^ k thì hàm sẽ trả về giá trị 0.
// Tìm Max có dạng 5^k
int TimMaxCoDang5Muk(int a[], int n)
{
	int Max = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTra(a[i], 5) == 1 && a[i] > Max)
		{
			Max = a[i];
		}
	}
	return Max;
}
//Bài 169 / 63 / SBT:Cho mảng một chiều các số nguyên.Hãy viết hàm tìm số chẵn lớn
//nhất nhỏ hơn mọi giá trị lẻ có trong mảng.
//Cách 2: Số chẵn này thuộc về mảng
//= > Tìm ra lẻ nhỏ nhất
//= > Tìm ra số chẵn lớn nhất và nhỏ hơn lẻ nhỏ nhất
//vừa tìm được ở trên tức là khoảng cách của nó gần hơn(trị tuyệt đối)
int TimSoChanLonNhatNhoHonLe(int arr[], int n) {
	int minE = INT_MIN;
	int maxO = INT_MAX;

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0 && arr[i] > minE) {
			minE = arr[i];// chẵn 
		}
		else if (arr[i] % 2 != 0 && arr[i] < maxO) {
			maxO = arr[i];
		}
	}

	if (minE < maxO) {
		return minE;
	}
	else {
		return -1; // Không tìm thấy số chẵn lớn nhất nhỏ hơn mọi giá trị lẻ
	}
}
//Bài 170 / 63 / SBT Thầy NTTMK : Cho mảng một chiều các số nguyên.Hãy viết hàm
//tìm số nguyên tố nhỏ nhất lớn hơn mọi giá trị có trong mảng.
int kiem_tra_so_nguyen_to(int num) {
	if (num <= 1) {
		return 0; // Không phải số nguyên tố
	}

	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return 0; // Không phải số nguyên tố
		}
	}

	return 1; // Là số nguyên tố
}
int tim_so_nguyen_to_nho_nhat(int arr[], int n) {
	int min_value = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min_value) {
			min_value = arr[i];
		}
	}
	int so_nguyen_to = min_value + 1;
	while (1) {
		if (kiem_tra_so_nguyen_to(so_nguyen_to) == 1) {
			return so_nguyen_to;
		}
		so_nguyen_to++;
	}
}
//Bài 171 / 63 / SBT Thầy NTTMK : Cho mảng một chiều các số nguyên dương.Hãy
//viết hàm tìm ước chung lớn nhất của tất cả các phần tử trong mảng ./
//vd: Mảng là : 4, 6, 10
//thì 4 có các ước là : 1, 2, 4
//thì 6 có các ước là : 1, 2, 3, 6
//thì 10 có các ước là : 1, 2, 5, 10
//
//= > ước chung lớn nhất của tất cả các phần tử trên là : 2

int TimMinBai171(int a[], int n)
{
	int Min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < Min)
		{
			Min = a[i];
		}
	}
	return Min;
}

// kiểm tra tất cả mọi phần tử trong mảng có chia hết cho x hay không ?
int KiemTraChiaHetChoX(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % x != 0)
		{
			return 0; // sai
		}
	}
	return 1; // đúng
}

int TimUCLNCuaMang(int a[], int n)
{
	int Min = TimMinBai171(a, n);
	int Check = KiemTraChiaHetChoX(a, n, Min);
	if (Check == 0) // không chia hết
	{
		for (int i = Min / 2; i >= 1; i--)
		{
			if (KiemTraChiaHetChoX(a, n, i) == 1)
			{
				return i;
			}
		}
	}
	return Min; // nếu như tất cả mảng đều chia hết cho Min thì Min chính là UCLN
}
//Bài 172 / 63 / SBT Thầy NTTMK : Cho mảng một chiều các số nguyên dương.Hãy
//viết hàm tìm bội chung nhỏ nhất của tất cả các phần tử trong mảng
// 
//ý tưởng : Tìm ra số lớn nhất trong mảng rồi lần lượt lấy số lớn
//nhất nhân cho 1, 2, 3 ... mỗi lần nhân kiểm tra kết quả vừa tìm 
//được có chia hết cho toàn bộ các số trong mảng hay không ? Nếu 
//thỏa thì số đó chính là BCNN
int TimMaxBai172(int a[], int n)
{
	int Max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > Max)
		{
			Max = a[i];
		}
	}
	return Max;
}

// kiểm tra xem số x có chia hết cho tất cả phần tử trong mảng hay không ?
int KiemTra(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (x % a[i] != 0)
		{
			return 0; // sai
		}
	}
	return 1; // đúng
}

int TimBCNNCuaMang(int a[], int n)
{
	int Max = TimMaxBai172(a, n);
	// vòng lặp chạy vô tận và chỉ dừng lại khi tìm ra đc số thỏa
	int dem = 1;
	while (1)
	{
		int bcnn = dem * Max;
		dem++;
		if (KiemTra(a, n, bcnn) == 1)
		{
			return bcnn;
		}
	}
}
//Bài 173 / 64 / SBT Thầy NTTMK : Cho mảng một chiều các số nguyên.Hãy viết hàm
//tìm chữ số xuất hiện ít nhất trong mảng
// 
//ý tưởng : Đầu tiên tạo 1 mảng có 10 phần tử và may mắn là chỉ số của nó cũng 
//chạy từ 0 tới 9 cho nên ta có thể tượng trưng chỉ số của mảng cũng chính là
//chữ số mà mình xét, và mỗi lần bóc ra đc 1 chữ số nào thì phần tử tương ứng 
//có chỉ số tương ứng ở mảng 10 phần tử đc cộng thêm 1
int tim_chu_so_xuat_hien_it_nhat(int arr[], int n) {
	// Khởi tạo mảng đếm với giá trị 0 cho tất cả các chữ số từ 0 đến 9
	int dem[10] = { 0 };

	// Duyệt qua từng phần tử trong mảng và tăng giá trị đếm cho chữ số tương ứng
	for (int i = 0; i < n; i++) {
		int num = arr[i];
		while (num != 0) {
			int chu_so = num % 10;
			dem[chu_so]++;
			num /= 10;
		}
	}

	// Tìm chữ số có số lần xuất hiện ít nhất
	int min_dem = n + 1; // Khởi tạo giá trị tối đa cho số lần xuất hiện
	int chu_so_min = -1; // Khởi tạo giá trị không hợp lệ cho chữ số

	for (int i = 0; i < 10; i++) {
		if (dem[i] < min_dem && dem[i] > 0) {
			min_dem = dem[i];
			chu_so_min = i;
		}
	}

	return chu_so_min;
}

//Sắp xếp các số dương trong mảng các số thực tăng dần, 
//các giá trị còn lại giữ nguyên giá trị& vị trí tương đối không thay đổi
//vd mảng ban đầu là : -3 10 3 - 5 0 15 8 - 6
//= > mảng sau khi sắp xếp là : -3 0 3 - 5 8 10 15 - 6
void HoanVi(int& a, int& b)
{
	// cách 1
	/* int temp = a;
	a = b;
	b = temp; */

	// cách 2
	b = a + b;
	a = b - a; // a = b
	b = b - a; // b = a
}

void SapXepDuongTang(int a[], int n)
{
	for (int i = 0; i < n - 1 && a[i] >= 0; i++)
	{
		for (int j = i + 1; j < n && a[j] >= 0; j++)
		{
			if (a[i] > a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}
//Sắp xếp các số dương tăng dần, các số âm giảm dần trong
//mảng một chiều các số thực, các vị trí tương đối không thay đổi
//
//= > mảng ban đầu là : 5 - 3 0 8 - 10 - 4 69
//
//= > mảng sau khi sắp xếp là : 0 - 3 5 8 - 4 - 10 69

void SapXep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] >= 0 && a[j] >= 0)
			{
				if (a[i] > a[j])
				{
					HoanVi(a[i], a[j]);
				}
			}

			if (a[i] < 0 && a[j] < 0)
			{
				if (a[i] < a[j])
				{
					HoanVi(a[i], a[j]);
				}
			}
		}
	}
}
//Bài 176 / 64 / SBT Thầy NTTMK : Hãy liệt kê các số âm trong mảng một chiều các số
//thực
void liet_ke_so_am(double arr[], int n) {
	printf("Cac so am trong mang la:\n");
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			printf("%.2f\n", arr[i]);
		}
	}
}
//Bài 177 / 64 / SBT Thầy NTTMK : Hãy liệt kê các số giá trị trong mảng một chiều các
//số thực thuộc đoạn[x, y] cho trước
void liet_ke_so_trong_doan(double arr[], int n, double x, double y) {// vì x và y khooog đổi nên khoogn cần tham chiếu 
	printf("Cac so trong doan [%.2f, %.2f] la:\n", x, y);
	for (int i = 0; i < n; i++) {
		if (arr[i] >= x && arr[i] <= y) {
			printf("%.2f\n", arr[i]);
		}
	}
}


//Bài 179 / 64 / SBT Thầy NTTMK : Hãy liệt kê các giá trị trong mảng mà thỏa điều 
//kiện lớn hơn trị tuyệt đối của giá trị đứng liền sau nó
//vd: mảng là : 3 - 5 - 8 4 0 69
//những giá trị thỏa là : 4

void LietKe(double a[], int n)
{
	printf("\nCac so thoa dieu kien la: ");
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > fabs(a[i + 1]))
		{
			printf("%4d", a[i]);
		}
	}
}
//Bài 180 / 65 / SBT Thầy NTTMK : Hãy liệt kê các giá trị trong mảng mà 
// thỏa điều kiện nhỏ hơn trị tuyệt đối của giá trị đứng liền sau nó và lớn 
// hơn giá trị đứng liền trước nó
//
//n = 7
//vd : mảng là : a0 a1 a2 a3 a4 a5 a6
//
//= > vòng lặp for chỉ xét từ i = 1 tới i = n - 2 (bỏ đầu & cuối)


void LietKe2(double a[], int n)
{
	printf("\nCac so thoa dieu kien la: ");
	for (int i = 1; i < n - 1; i++)
	{
		// cách 1
		if (a[i] < fabs(a[i + 1]) && a[i] > a[i - 1])
		{
			printf("%4d", a[i]);
		}

		// cách 2: chạy tốt hơn
		if (a[i] >= fabs(a[i + 1]))
		{
			continue;
		}
		if (a[i] < a[i - 1])
		{
			printf("%4d", a[i]);
		}

		// cách 3: cũng giống cách 2
		if (a[i] >= fabs(a[i + 1]) || a[i] <= a[i - 1])
		{
			continue;
		}
		printf("%4d", a[i]);
	}
}


//Bài làm thêm nâng cao 2 (**) : Viết chương trình nhập vào mảng số nguyên và số
//nguyên k(1 <= k <= số lượng các giá trị phân biệt trong mảng).Tìm số hạng lớn thứ
//k của mảng

void LietKeVaDemPhanBiet(int a[], int n)
{
	printf("\nCac phan tu phan biet la: ");
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int check = 1; // true

		// từ vị trí i sẽ lùi về các vị trí trước đó để xét
		for (int j = i - 1; j >= 0; j--)
		{
			if (a[i] == a[j])
			{
				// đã bị trùng
				check = 0; // false
				break;
			}
		}
		if (check == 1)
		{
			printf("%4d", a[i]);
			dem++;
		}
	}
	printf("\nCo %d phan tu phan biet", dem);
}
/// làm tiếp còn thiếu .....

//Bài 181 / 65 / SBT Thầy NTTMK : Cho mảng một chiều các số nguyên.Hãy viết hàm
//liệt kê các giá trị chẵn có ít nhất một lân cận cũng là giá trị chẵn.

void lietKelancanchan(int arr[], int n) {
	if (n < 3) {
		return;
		// mảng có ít hơn 3 phần tử thì không có lân cận

	}// phải bắt đầu từ thằng thứ 2 
	for (int i = 1; i < n - 1; i++) {
		if (arr[i] % 2 == 0 && (arr[i - 1] % 2 == 0 || arr[i + 1] % 2 == 0)) {
			printf("\n%4", arr[i]);
		}
	}
}
//Bài 182 / 65 / SBT Thầy NTTMK : Cho mảng một chiều các số thực.Hãy viết hàm liệt
//kê tất cả các giá trị trong mảng có ít nhất một lân cận trái dấu với nó .
void lietKelancantraiDau(double arr[], double n) {
	for (int i = 0; i < n; i++) {

		if ((i > 0 && (arr[i] * arr[i] - 1 < 0)) || (i < n - 1 && (arr[i] * arr[i] + 1 > 0))) {
			printf("\n%.2lf", arr[i]);
		}
	}
}
//Bài 183 / 65 / SBT Thầy NTTMK : Hãy liệt kê các vị trí mà giá trị tại vị trí đó là giá trị
//lớn nhất trong mảng một chiều các số thực .
void lietKeviTriLonNhatN(int arr[], int n) {
	// khởi tạo giá trị lớn nhất 
	int max_giatri = arr[0];
	int max_vitri = 0;
	// duyệt mảng 
	for (int i = 0; i < n; i++) {
		if (arr[i] > max_giatri) {

			max_giatri = arr[i];

			max_vitri = i;


		}
	}
	printf("\nMax giá trị là %4d ", max_giatri);
	printf("\nMax vị trí là %4d ", max_vitri);
}
//Bài 184 / 65 / SBT Thầy NTTMK : Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên
//tố trong mảng một chiều các số 
void lietkeCacViTriSonguyenTo(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (KiemTraNguyenTo(arr[i]) == 1) {
			printf("\nCac vi tri la so nguyen to la:%4d ", i);
		}
	}
}
//Bài 185 / 65 / SBT Thầy NTTMK : Hãy liệt kê các vị trí mà giá trị tại vị trí đó là số
//chính phương trong mảng một chiều các số nguyên .
void LietKeCacSoChinhPHuong(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (KiemTraSoChinhPhuong(arr[i]) == 1) {
			printf("\n%4d ", i);
		}
	}
}
//Bài 186 / 65 / SBT Thầy NTTMK : Hãy liệt kê các vị trí trong mảng một chiều các số
//thực mà giá trị tại các vị trí đó bằng giá trị âm đầu tiên trong mảng
double  tim_vi_tri_am_dau_tien(double arr[], double kich_thuoc_mang) {
	for (int i = 0; i < kich_thuoc_mang; i++) {
		if (arr[i] < 0) {
			return i; // Trả về vị trí của giá trị âm đầu tiên
		}
	}
	return -1; // Nếu không tìm thấy giá trị âm nào, trả về -1
}
void timGiatriBanggiatriamDauTien(double arr[], double n) {
	int tim_vi_tri_bang_gia_tri_dau_tien = tim_vi_tri_am_dau_tien(arr, n);
	// cho thằng giá trị âm đầu bằng vị trí âm đầu tiên 
	double gia_tri_am_dau_tien = arr[tim_vi_tri_bang_gia_tri_dau_tien];
	for (int i = 0; i < n; i++) {
		if (arr[i] == gia_tri_am_dau_tien) {
			printf("\n%4d ", i);
		}
	}

}
//Bài 187 / 65 / SBT Thầy NTTMK : Hãy liệt kê các vị trí mà giá trị tại các vị trí đó là
//giá trị dương nhỏ nhất trong mảng một chiều các số thực
int tim_min_Duong_nho_nhat(int arr[], int n) {
	int min_duong = arr[0];
	int vi_tri = 0;	
	for (int i = 0; i < n; i++) {
		if (arr[i] < min_duong) {
			min_duong = arr[i];
			 vi_tri = i;
		}
	}
	return vi_tri;
}
void tim_vi_tri_gia_tri_duong_nn(int a[], int n) {
	int tim_min_Duong = tim_min_Duong_nho_nhat(a, n);
	/// cho giá trị min dương bằng vị trí 
	int gia_tri_min_duong = a[tim_min_Duong];
	for (int i = 0; i < n; i++) {
		if (a[i] == gia_tri_min_duong) {
			printf("\n%4d ", i);
		}
	}
}
//Bài 188 / 65 / SBT Thầy NTTMK : Hãy liệt kê các vị trí chẵn lớn nhất trong mảng một
//chiều các số nguyên .
// 
//Bài 189 / 66 / SBT Thầy NTTMK : Hãy liệt kê các giá trị trong mảng một chiều các số
//nguyên có chữ số đầu tiên là chữ số lẻ.
void chuSodauTienlaLe(int a[], int n) {
	for (int i = 0; i < n; i++) {
		int sodauTien = a[i];
		// lặp lại chi cho 10 cho đến khi số đầu tiên thành số cuối cùng 
		if (a[i] < 10) {
			continue;// thoát vòng lặp 
		}
		while (sodauTien >= 10) {
			sodauTien /= 10;/// bo chữ số cuối 
		}
		// kiểm tra xem chữ số đầu có lẻ không 
		if (sodauTien % 2 != 0) {
			printf("%d\n", a[i]);// in ra các giá trị 
		}
	}
}
//Bài 190 / 66 / SBT Thầy NTTMK : Hãy liệt kê các giá trị có toàn chữ số lẻ trong mảng
//một chiều các số nguyên
void kiemTratoanle(int a[], int n) {
	for (int i = 0; i < n; i++) {
		int sohienTai = a[i];
		int laToanLe = 1; // Giả định ban đầu rằng toàn bộ là chữ số lẻ

		while (sohienTai > 0) {
			int chuSoCuoi = sohienTai % 10; // Lấy chữ số cuối cùng
			if (chuSoCuoi % 2 == 0) {
				laToanLe = 0; // Nếu có chữ số chẵn, đặt lại thành 0
				break; // Thoát khỏi vòng lặp khi gặp chữ số chẵn
			}
			sohienTai /= 10; // Bỏ chữ số cuối cùng
		}

		if (laToanLe) {
			printf("%d\n", a[i]);
		}
	}
}
//Bài 191 / 66 / SBT Thầy NTTMK : Hãy liệt kê các giá trị cực đại trong mảng một
//chiều các số thực.Một phần tử được gọi là cực đại khi lớn hơn các phần tử lân cận
//Bài 192 / 66 / SBT Thầy NTTMK : Hãy liệt kê các giá trị trong mảng một chiều các số
//nguyên có chữ số đầu tiên là chữ số chẵn.
//Bài 196 / 66 / SBT Thầy NTTMK : Hãy liệt kê các số âm trong mảng một chiều các số
//thực .
//Bài 197 / 67 / SBT Thầy NTTMK : Hãy liệt kê các giá trị trong mảng một chiều các số
//nguyên có chữ số đầu tiên là chữ số lẻ.


//*KỸ THUẬT TÍNH TỔNG*

//Bài 200 / 67 / SBT Thầy NTTMK : Tính tổng các phần tử trong mảng .
void tinhTongmang(int a[], int n) {
	int tong = 0;// khởi tạo 
	for (int i = 0; i < n; i++) {
		tong += a[i];
	}
	printf("\n%4d", tong);
}
//Bài 201 / 67 / SBT Thầy NTTMK : Tính tổng các giá trị dương trong mảng một chiều
//các số thực .
void tinhTongmangduong(int a[], int n) {
	int tong = 0;// khởi tạo 
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			tong += a[i];
		}
		
	}
	printf("\n%4d", tong);
}
//Bài 202 / 67 / SBT Thầy NTTMK : Tính tổng các giá trị có chữ số đầu tiên là chữ số lẻ
//trong mảng một chiều các số nguyên .
int kiemTrachuSodauTienlaLe(int n) {
	int chuSoDau = 0;/// nó mà bằng 0 là sai 
	// lấy chữ số đầu tiên 
	while(n != 0){
		chuSoDau = n % 10;// lấy số cuối 
		n /= 10;// bỏ số cuối 

	}
	/// kiểm tra xem chữ số đầu tiên có phải là lẻ hay không 
	return (chuSoDau % 2 != 0);
}
int tingTongcacChuSodautienlaLe(int a[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (kiemTrachuSodauTienlaLe(a[i])) {
			tong += a[i];
		}
}
	return tong;
}
//Bài 203 / 67 / SBT Thầy NTTMK : Tính tổng các giá trị có chữ số hàng chục là chữ số
//5 có trong mảng một chiều các số nguyên.
int tongSohangchucla5(int a[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		int chuSohangChuc = (a[i] / 10) % 10;
		if (chuSohangChuc == 5) {
			tong += a[i];
		}
	}
	return tong;
}
//Bài 204 / 67 / SBT Thầy NTTMK : Tính tổng các giá trị lớn hơn giá trị đứng liền trước
//nó trong mảng một chiều các số thực

//Bài 205 / 67 / SBT Thầy NTTMK : Tính tổng các giá trị lớn hơn trị tuyệt đối của giá
//trị đứng liền sau nó trong mảng một chiều các số thực
float tong_gia_tri_lon_hon_tuyet_doi(float arr[], int n) {
	float tong = 0;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] > fabs(arr[i + 1])) {
			tong += arr[i];
		}
	}
	return tong;
}
//Bài 206 / 68 / SBT Thầy NTTMK : Tính tổng các giá trị lớn hơn các giá trị xung
//quanh trong mảng một chiều các số thực .
float tong_gia_tri_lon_hon_xung_quanh(float arr[], int n) {
	float tong = 0;
	for (int i = 1; i < n - 1; i++) {
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
			tong += arr[i];
		}
	}
	return tong;
}
//Bài 207 / 68 / SBT Thầy NTTMK : Tính tổng các phần tử "cực trị" trong mảng.Một
//phần tử được gọi là cực trị khi nó lớn hơn hoặc nhỏ hơn các phần tử xung quanh nó
float tong_phan_tu_cuc_tri(float arr[], int n) {
	float tong = 0;
	for (int i = 1; i < n - 1; i++) {
		if ((arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) || (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])) {
			tong += arr[i];
		}
	}
	return tong;
}
//Bài 208 / 68 / SBT Thầy NTTMK : Tính tổng các giá trị chính phương trong mảng
//một chiều các số nguyên .
// Hàm kiểm tra xem một số có phải là số chính phương hay không
int la_so_chinh_phuong(int n) {
	if (n < 0) {
		return 0; // Số âm không phải là số chính phương
	}

	int can_bac_hai = (int)sqrt(n); // Lấy căn bậc hai của n và chuyển về kiểu số nguyên
	return can_bac_hai * can_bac_hai == n; // Kiểm tra n có bằng bình phương của căn bậc hai không
}

// Hàm tính tổng các giá trị chính phương trong mảng
int tong_gia_tri_chinh_phuong(int arr[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (la_so_chinh_phuong(arr[i])) {
			tong += arr[i];
		}
	}
	return tong;
}
//Bài 209 / 68 / SBT Thầy NTTMK : Tính tổng các giá trị đối xứng trong mảng một
//chiều các số nguyên
int kiemtraDoiXung(int n) {
	int temp = n;
	int reverse = 0;
	while (temp != 0) {
		int d = temp % 10;
		reverse = reverse * 10 + d;
		temp /= 10;
	}
	return (n == reverse);
}
int tong_gia_tri_doi_xung(int arr[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (kiemtraDoiXung(arr[i])) {
			tong += arr[i];
		}
	}
	return tong;
}
//Bài 210 / 68 / SBT Thầy NTTMK : Tính tổng các giá trị có chữ số đầu tiên là chữ số
//chẵn trong mảng các số nguyên .
int chua_chu_so_chan(int n) {
	int chu_so_dau_tien = abs(n); // Lấy giá trị tuyệt đối của n để tránh số âm
	while (chu_so_dau_tien >= 10) {
		chu_so_dau_tien /= 10; // Lấy chữ số đầu tiên bằng cách lặp đi lặp lại chia cho 10
	}
	return (chu_so_dau_tien % 2 == 0); // Kiểm tra chữ số đầu tiên có phải là chữ số chẵn hay không
}

// Hàm tính tổng các giá trị có chữ số đầu tiên là chữ số chẵn trong mảng
int tong_gia_tri_chua_chu_so_chan(int arr[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (chua_chu_so_chan(arr[i])) {
			tong += arr[i];
		}
	}
	return tong;
}
//Bài 211 / 68 / SBT Thầy NTTMK : Tính trung bình cộng các số nguyên tố trong mảng
//một chiều các số nguyên .
bool la_so_nguyen_to(int n) {
	if (n <= 1) {
		return false; // Số 0 và 1 không phải là số nguyên tố
	}
	if (n <= 3) {
		return true; // Số 2 và 3 là số nguyên tố
	}
	if (n % 2 == 0 || n % 3 == 0) {
		return false; // Số chia hết cho 2 hoặc 3 không phải là số nguyên tố
	}
	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return false; // Số chia hết cho (i) hoặc (i + 2) không phải là số nguyên tố
		}
	}
	return true; // Nếu không có điều kiện nào phía trên thỏa mãn, thì số đó là số nguyên tố
}

// Hàm tính trung bình cộng của các số nguyên tố trong mảng
double trung_binh_cong_so_nguyen_to(int arr[], int n) {
	int tong = 0;
	int so_luong_so_nguyen_to = 0;

	for (int i = 0; i < n; i++) {
		if (la_so_nguyen_to(arr[i])) {
			tong += arr[i];
			so_luong_so_nguyen_to++;
		}
	}

	if (so_luong_so_nguyen_to == 0) {
		return 0.0; // Tránh chia cho 0
	}

	return (double)tong / so_luong_so_nguyen_to; // Trả về giá trị trung bình cộng
}
//Bài 212 / 68 / SBT Thầy NTTMK : Tính trung bình cộng các số dương trong mảng
//một chiều các số thực .
double trung_binh_cong_so_duong(double arr[], int n) {
	double tong = 0;
	int so_luong_so_duong = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			tong += arr[i];
			so_luong_so_duong++;
		}
	}

	if (so_luong_so_duong == 0) {
		return 0.0; // Tránh chia cho 0
	}

	return tong / so_luong_so_duong; // Trả về giá trị trung bình cộng
}
//Bài 213 / 68 / SBT Thầy NTTMK : Tính trung bình cộng các giá trị lớn hơn giá trị x
//trong mảng một chiều các số thực .
double trung_binh_cong_lon_hon_x(double arr[], int n, double x) {
	double tong = 0;
	int so_luong_gia_tri_lon_hon_x = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > x) {
			tong += arr[i];
			so_luong_gia_tri_lon_hon_x++;
		}
	}

	if (so_luong_gia_tri_lon_hon_x == 0) {
		return 0.0; // Tránh chia cho 0
	}

	return tong / so_luong_gia_tri_lon_hon_x; // Trả về giá trị trung bình cộng
}

//Bài 214 / 68 / SBT Thầy NTTMK : Tính trung bình nhân các số dương trong mảng
//một chiều các số thực .
double trung_binh_nhan_so_duong(double arr[], int n) {
	double tich = 1;
	int so_luong_so_duong = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			tich *= arr[i];
			so_luong_so_duong++;
		}
	}

	if (so_luong_so_duong == 0) {
		return 0.0; // Tránh chia cho 0
	}

	return tich; // Trả về giá trị trung bình nhân
}
//Bài 215 / 69 / SBT Thầy NTTMK : Tính khoảng cách trung bình giữa các giá trị trong
//mảng
double khoang_cach_trung_binh(double arr[], int n) {
	double tong_khoang_cach = 0;
	int so_luong_cap_giua = 0;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			double khoang_cach = fabs(arr[i] - arr[j]);
			tong_khoang_cach += khoang_cach;
			so_luong_cap_giua++;
		}
	}

	if (so_luong_cap_giua == 0) {
		return 0.0; // Tránh chia cho 0
	}

	return tong_khoang_cach / so_luong_cap_giua; // Trả về giá trị trung bình
}
//* KỸ THUẬT ĐẾM*

//Bài 216 / 69 / SBT Thầy NTTMK : Đếm số lượng số chẵn có trong mảng một chiều
//các số nguyên .
int dem_so_chan(int arr[], int n) {
	int so_luong_so_chan = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			so_luong_so_chan++;
		}
	}

	return so_luong_so_chan;
}
//Bài 217 / 69 / SBT Thầy NTTMK : Đếm số lượng giá trị dương chia hết cho 7 trong
//mảng một chiều các số nguyên .
int dem_so_duong_chia_het_cho_7(int arr[], int n) {
	int so_luong_so_duong_chia_het_cho_7 = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > 0 && arr[i] % 7 == 0) {
			so_luong_so_duong_chia_het_cho_7++;
		}
	}

	return so_luong_so_duong_chia_het_cho_7;
}
//Bài 218 / 69 / SBT Thầy NTTMK : Đếm số lượng giá trị đối xứng trong mảng các số
//nguyên .
int la_so_doi_xung(int n) {
	int reverse = 0;
	int temp = n;

	while (temp != 0) {
		int digit = temp % 10;
		reverse = reverse * 10 + digit;
		temp /= 10;
	}

	return (n == reverse);
}

// Hàm đếm số lượng giá trị đối xứng trong mảng
int dem_so_doi_xung(int arr[], int n) {
	int so_luong_so_doi_xung = 0;

	for (int i = 0; i < n; i++) {
		if (la_so_doi_xung(arr[i])) {
			so_luong_so_doi_xung++;
		}
	}

	return so_luong_so_doi_xung;
}
//Bài 219 / 69 / SBT Thầy NTTMK : Đếm số lần xuất hiện của giá trị x trong mảng một
//chiều các số thực .
int dem_so_lan_xuat_hien(double arr[], int n, double x) {
	int so_lan_xuat_hien = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			so_lan_xuat_hien++;
		}
	}

	return so_lan_xuat_hien;
}
//Bài 220 / 69 / SBT Thầy NTTMK : Hãy đếm số lượng giá trị có chữ số tận cùng bằng
//5 trong mảng các số nguyên .
int dem_so_luong_chu_so_5(int arr[], int n) {
	int so_luong_chu_so_5 = 0;

	for (int i = 0; i < n; i++) {
		int chu_so_cuoi = arr[i] % 10;
		if (chu_so_cuoi == 5) {
			so_luong_chu_so_5++;
		}
	}

	return so_luong_chu_so_5;
}
//Bài 221 / 69 / SBT Thầy NTTMK : Hãy cho biết sự tương quan giữa số lượng số chẵn
//và số lượng số lẻ trong mảng các số nguyên
int dem_so_chan_ne(int arr[], int n) {
	int so_luong_so_chan = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			so_luong_so_chan++;
		}
	}

	return so_luong_so_chan;
}

// Hàm đếm số lượng số lẻ trong mảng
int dem_so_le(int arr[], int n) {
	int so_luong_so_le = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			so_luong_so_le++;
		}
	}

	return so_luong_so_le;
}

//Bài 222 / 70 / SBT Thầy NTTMK : Hãy đếm số lượng phần tử cùng lớn hơn hoặc nhỏ
//hơn các phần tử xung quanh .
int dem_so_phan_tu_lon_hon_xung_quanh(int arr[], int n) {
	int so_luong_phan_tu = 0;

	for (int i = 1; i < n - 1; i++) {
		if ((arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) ||
			(arr[i] < arr[i - 1] && arr[i] < arr[i + 1])) {
			so_luong_phan_tu++;
		}
	}

	return so_luong_phan_tu;
}
//Bài 223 / 70 / SBT Thầy NTTMK : Hãy đếm số lượng "số nguyên tố" có trong mảng
//một chiều các số nguyên .


// Hàm đếm số lượng số nguyên tố trong mảng
int dem_so_nguyen_to(int arr[], int n) {
	int so_luong_so_nguyen_to = 0;

	for (int i = 0; i < n; i++) {
		if (la_so_nguyen_to(arr[i])) {
			so_luong_so_nguyen_to++;
		}
	}

	return so_luong_so_nguyen_to;
}
//Bài 224 / 70 / SBT Thầy NTTMK : Hãy đếm số lượng "số hoàn thiện" có trong mảng
//một chiều các số nguyên .
int la_so_hoan_thien(int n) {
	if (n <= 0) {
		return 0; // Không phải số hoàn thiện
	}

	int tong_uoc_so = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			tong_uoc_so += i;
		}
	}

	return (tong_uoc_so == n);
}

// Hàm đếm số lượng số hoàn thiện trong mảng
int dem_so_hoan_thien(int arr[], int n) {
	int so_luong_so_hoan_thien = 0;

	for (int i = 0; i < n; i++) {
		if (la_so_hoan_thien(arr[i])) {
			so_luong_so_hoan_thien++;
		}
	}

	return so_luong_so_hoan_thien;
}

//Bài 226 / 70 / SBT Thầy NTTMK : Hãy xác định số lượng các phần tử kề nhau mà cả
//hai đều chẵn .
int la_so_chan(int n) {
	return n % 2 == 0;
}

// Hàm đếm số lượng cặp phần tử kề nhau mà cả hai đều là số chẵn
int dem_so_luong_cap_so_chan(int arr[], int n) {
	int so_luong_cap_so_chan = 0;

	for (int i = 0; i < n - 1; i++) {
		if (la_so_chan(arr[i]) && la_so_chan(arr[i + 1])) {
			so_luong_cap_so_chan++;
		}
	}

	return so_luong_cap_so_chan;
}
//Bài 227 / 71 / SBT Thầy NTTMK : Hãy xác định số lượng các phần tử kề nhau mà cả
//hai số trái dấu nhau.
int la_so_am(int n) {
	return n < 0;
}

// Hàm kiểm tra xem một số có phải là số dương hay không
int la_so_duong(int n) {
	return n > 0;
}

// Hàm đếm số lượng cặp phần tử kề nhau mà cả hai số trái dấu nhau
int dem_so_luong_cap_so_trai_dau(int arr[], int n) {
	int so_luong_cap_so_trai_dau = 0;

	for (int i = 0; i < n - 1; i++) {
		if ((la_so_am(arr[i]) && la_so_duong(arr[i + 1])) ||
			(la_so_duong(arr[i]) && la_so_am(arr[i + 1]))) {
			so_luong_cap_so_trai_dau++;
		}
	}

	return so_luong_cap_so_trai_dau;
}
//Bài 228 / 71 / SBT Thầy NTTMK : Hãy xác định số lượng các phần tử kề nhau mà số
//đứng sau cùng dấu số đứng trước và có giá trị tuyệt đối lớn hơn.
// Hàm kiểm tra xem một số có giá trị tuyệt đối lớn hơn số khác hay không
int la_so_larger_tuyet_doi(int a, int b) {
	return (a > b) && (a > 0);
}

// Hàm đếm số lượng cặp phần tử kề nhau mà số đứng sau cùng dấu số đứng trước và có giá trị tuyệt đối lớn hơn
int dem_so_luong_cap_so_larger_tuyet_doi(int arr[], int n) {
	int so_luong_cap_so_larger_tuyet_doi = 0;

	for (int i = 0; i < n - 1; i++) {
		if (la_so_larger_tuyet_doi(arr[i], arr[i + 1])) {
			so_luong_cap_so_larger_tuyet_doi++;
		}
	}

	return so_luong_cap_so_larger_tuyet_doi;
}

//Bài 229 / 70 / SBT Thầy NTTMK : Hãy đếm số lượng các giá trị phân biệt có trong
//mảng .
// Hàm kiểm tra xem một giá trị đã tồn tại trong mảng chưa
int da_ton_tai_trong_mang(int arr[], int n, int gia_tri) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == gia_tri) {
			return 1; // Giá trị đã tồn tại trong mảng
		}
	}
	return 0; // Giá trị chưa tồn tại trong mảng
}

// Hàm đếm số lượng giá trị phân biệt trong mảng
int dem_so_luong_gia_tri_phan_biet(int arr[], int n) {
	int so_luong_gia_tri_phan_biet = 0;

	for (int i = 0; i < n; i++) {
		// Kiểm tra xem giá trị đã tồn tại trong mảng chưa
		if (!da_ton_tai_trong_mang(arr, i, arr[i])) {
			so_luong_gia_tri_phan_biet++;
		}
	}

	return so_luong_gia_tri_phan_biet;
}
//Bài 230 / 70 / SBT Thầy NTTMK : Hãy liệt kê tần suất xuất hiện của các giá trị xuất
//hiện trong mảng . (Lưu ý : Mỗi giá trị liệt kê một lần) .
// bỏ qua 
//Bài 231 / 71 / SBT Thầy NTTMK : Hãy liệt kê các giá trị xuất hiện trong mảng một
//chiều các số nguyên đúng một lần .
// bỏ qua 
//Bài 232 / 71 / SBT Thầy NTTMK : Hãy liệt kê các giá trị xuất hiện trong dãy quá một
//lần.Lưu ý : Mỗi giá trị liệt kê một lần .

// Hàm liệt kê các giá trị xuất hiện nhiều hơn một lần trong mảng
void liet_ke_gia_tri_xuat_hien_nhieu_lan(int arr[], int n) {
	printf("Cac gia tri xuat hien nhieu lan trong mang:\n");

	for (int i = 0; i < n; i++) {
		if (!da_ton_tai_trong_mang(arr, i, arr[i])) {
			// Nếu giá trị chưa xuất hiện, thêm vào danh sách và kiểm tra xem có xuất hiện thêm lần nào không
			int tan_suat = 0;

			// Kiểm tra tần suất xuất hiện của giá trị trong mảng
			for (int j = i; j < n; j++) {
				if (arr[j] == arr[i]) {
					tan_suat++;
				}
			}

			if (tan_suat > 1) {
				printf("%d ", arr[i]);
			}
		}
	}
	printf("\n");
}
//Bài 237 / 72 / SBT Thầy NTTMK : Hãy tìm một giá trị có số lần xuất hiện nhiều nhất
//trong mảng một chiều các số nguyên .
// Hàm tìm giá trị có số lần xuất hiện nhiều nhất trong mảng
int findMostFrequent(int arr[], int n) {
	int maxCount = 0;  // Số lần xuất hiện nhiều nhất
	int mostFrequent = arr[0];  // Giá trị xuất hiện nhiều nhất

	// Mảng đếm số lần xuất hiện của mỗi giá trị
	int count[1000] = { 0 }; // Giả sử giá trị trong mảng không vượt quá 1000

	for (int i = 0; i < n; i++) {
		count[arr[i]]++;  // Tăng số lần xuất hiện của giá trị arr[i]
		if (count[arr[i]] > maxCount) {
			maxCount = count[arr[i]];
			mostFrequent = arr[i];
		}
	}

	return mostFrequent;
}
//Bài 233 / 71 / SBT Thầy NTTMK : Viết chương trình nhập mảng 1 chiều các số
//nguyên và in ra màn hình các giá trị phân biệt trong mảng kèm theo số lượng và
//tần suất xuất hiện của chúng trong dãy .
void findAndPrintFrequencies(int arr[], int n) {
	// Mảng đếm số lần xuất hiện của từng giá trị
	int count[1000] = { 0 }; // Giả sử giá trị trong mảng không vượt quá 1000

	printf("Các giá trị phân biệt trong mảng và tần suất xuất hiện:\n");

	for (int i = 0; i < n; i++) {
		count[arr[i]]++;  // Tăng số lần xuất hiện của giá trị arr[i]
	}

	for (int i = 0; i < 1000; i++) {
		if (count[i] > 0) {
			printf("%d xuất hiện %d lần\n", i, count[i]);
		}
	}
}

//Bài 234 / 71 / SBT Thầy NTTMK : Cho hai mảng số thực a, b.Đếm số lượng giá trị chỉ
//xuất hiện một trong hai mảng.
// Hàm kiểm tra xem giá trị x có xuất hiện trong mảng arr hay không
int isValueInArray(double x, double arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			return 1; // Trả về 1 nếu giá trị x xuất hiện trong mảng arr
		}
	}
	return 0; // Trả về 0 nếu giá trị x không xuất hiện trong mảng arr
}

// Hàm đếm số lượng giá trị chỉ xuất hiện trong một trong hai mảng
int countValuesInOneArray(double a[], int n, double b[], int m) {
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (!isValueInArray(a[i], b, m)) {
			count++;
		}
	}

	for (int i = 0; i < m; i++) {
		if (!isValueInArray(b[i], a, n)) {
			count++;
		}
	}

	return count;
}
//Bài 235 / 71 / SBT Thầy NTTMK : Cho hai mảng a, b.Liệt kê các giá trị chỉ xuất hiện 1
//trong 2 mảng.
// Hàm liệt kê các giá trị chỉ xuất hiện một lần trong hai mảng
int isValueUnique(double x, double arr[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			count++;
		}
		if (count > 1) {
			return 0; // Giá trị x xuất hiện nhiều hơn một lần, không đếm là giá trị duy nhất
		}
	}
	return (count == 1); // Trả về 1 nếu giá trị x xuất hiện đúng một lần, ngược lại trả về 0
}

// Hàm liệt kê các giá trị chỉ xuất hiện một lần trong hai mảng
void listUniqueValues(double a[], int n, double b[], int m) {
	printf("Các giá trị chỉ xuất hiện một lần trong hai mảng:\n");

	for (int i = 0; i < n; i++) {
		if (isValueUnique(a[i], a, n) && !isValueUnique(a[i], b, m)) {
			printf("%.2lf\n", a[i]);
		}
	}

	for (int i = 0; i < m; i++) {
		if (isValueUnique(b[i], b, m) && !isValueUnique(b[i], a, n)) {
			printf("%.2lf\n", b[i]);
		}
	}
}
//Bài 236 / 81 / SBT Thầy NTTMK : Cho hai mảng a và b.Hãy đếm số lần xuất hiện của
//mảng a trong mảng b ? .
int isArrayInArray(int a[], int n, int b[], int m, int startIndex) {
	// Kiểm tra xem mảng a có thể vừa vào mảng b tại vị trí startIndex hay không
	if (startIndex + n > m) {
		return 0;
	}

	// Kiểm tra từng phần tử của mảng a
	for (int i = 0; i < n; i++) {
		if (a[i] != b[startIndex + i]) {
			return 0; // Không khớp, trả về 0
		}
	}
	return 1; // Khớp, trả về 1
}

// Hàm đếm số lần xuất hiện của mảng a trong mảng b
int countArrayInArray(int a[], int n, int b[], int m) {
	int count = 0;

	// Duyệt qua mảng b và kiểm tra từng vị trí có phải là mảng a không
	for (int i = 0; i < m; i++) {
		if (isArrayInArray(a, n, b, m, i)) {
			count++;
		}
	}

	return count;
}

//Bài 237 / 72 / SBT Thầy NTTMK : Hãy tìm một giá trị có số lần xuất hiện nhiều nhất
//trong mảng các số nguyên .
//int findMostFrequent(int arr[], int n) {
//	int maxCount = 0; // Số lần xuất hiện nhiều nhất
//	int mostFrequent = arr[0]; // Giá trị có số lần xuất hiện nhiều nhất, ban đầu là phần tử đầu tiên của mảng
//
//	for (int i = 0; i < n; i++) {
//		int count = 0; // Biến đếm số lần xuất hiện của giá trị arr[i] trong mảng
//
//		for (int j = 0; j < n; j++) {
//			if (arr[j] == arr[i]) {
//				count++;
//			}
//		}
//
//		if (count > maxCount) {
//			maxCount = count;
//			mostFrequent = arr[i];
//		}
//	}
//
//	return mostFrequent;
//}
//Bài 238 / 72 / SBT Thầy NTTMK : (*) Hãy liệt kê các giá trị có số lần xuất hiện nhiều
//nhất trong mảng các số nguyên .
int findMaxCount(int arr[], int n) {
	int maxCount = 0; // Số lần xuất hiện nhiều nhất
	for (int i = 0; i < n; i++) {
		int count = 0; // Biến đếm số lần xuất hiện của giá trị arr[i] trong mảng

		for (int j = 0; j < n; j++) {
			if (arr[j] == arr[i]) {
				count++;
			}
		}

		if (count > maxCount) {
			maxCount = count;
		}
	}

	return maxCount;
}
// Hàm liệt kê các giá trị có số lần xuất hiện nhiều nhất trong mảng
void listMostFrequentValues(int arr[], int n) {
	int maxCount = findMaxCount(arr, n);

	printf("Các giá trị có số lần xuất hiện nhiều nhất trong mảng:\n");

	for (int i = 0; i < n; i++) {
		int count = 0; // Biến đếm số lần xuất hiện của giá trị arr[i] trong mảng

		for (int j = 0; j < n; j++) {
			if (arr[j] == arr[i]) {
				count++;
			}
		}

		if (count == maxCount) {
			printf("%d\n", arr[i]);
		}
	}
}
//*KỸ THUẬT ĐẶT CỜ HIỆU*

//Bài 240 / 72 / SBT Thầy NTTMK : Hãy kiểm tra mảng số nguyên có tồn tại giá trị
//không hay không ? Nếu không tồn tại giá trị không trả về giá trị 0, ngược lại trả về
//1
int tontaiGiatri(int a[], int n, int value) {
	for (int i = 0; i < n; i++) {
		if (a[i] == value) {
			return 1;
		}
	}
	return 0;
}
//Bài 241 / 72 / SBT Thầy NTTMK : Hãy kiểm tra mảng số nguyên có tồn tại hai giá trị
//không liên tiếp hay không ? .
int tonTaiHaiGiaTriKhongLienTiep(int arr[], int n, int value1, int value2) {
	int found1 = 0; // Biến để theo dõi việc tìm thấy giá trị thứ nhất
	int found2 = 0; // Biến để theo dõi việc tìm thấy giá trị thứ hai

	for (int i = 0; i < n; i++) {
		if (arr[i] == value1) {
			found1 = 1; // Tìm thấy giá trị thứ nhất
		}
		else if (arr[i] == value2) {
			found2 = 1; // Tìm thấy giá trị thứ hai
		}
	}

	return found1 && found2; // Trả về 1 nếu cả hai giá trị đều được tìm thấy
}

//Bài 242 / 72 / SBT Thầy NTTMK : Hãy kiểm tra mảng số nguyên có tồn tại giá trị
//chẵn hay không ? Nếu không tồn tại giá trị chẵn thì trả về giá trị 0, ngược lại trả về
//1 .
int tonTaiGiaTriChan(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			return 1; // Tìm thấy giá trị chẵn
		}
	}
	return 0; // Không tìm thấy giá trị chẵn
}
//Bài 243 / 72 / SBT Thầy NTTMK : Hãy kiểm tra mảng số nguyên có tồn tại số nguyên
//tố hay không ? Nếu có trả về 1, nếu không trả về 0 .
// Hàm kiểm tra xem một số có phải là số nguyên tố hay không
//int laSoNguyenTo(int num) {
//	if (num <= 1) {
//		return 0; // Không phải số nguyên tố
//	}
//	if (num <= 3) {
//		return 1; // Là số nguyên tố
//	}
//	if (num % 2 == 0 || num % 3 == 0) {
//		return 0; // Không phải số nguyên tố
//	}
//
//	for (int i = 5; i * i <= num; i += 6) {
//		if (num % i == 0 || num % (i + 2) == 0) {
//			return 0; // Không phải số nguyên tố
//		}
//	}
//
//	return 1; // Là số nguyên tố
//}

// Hàm kiểm tra xem mảng có tồn tại số nguyên tố hay không
//int tonTaiSoNguyenTo(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		if (laSoNguyenTo(arr[i])) {
//			return 1; // Tìm thấy số nguyên tố
//		}
//	}
//	return 0; // Không tìm thấy số nguyên tố
//}
//Bài 244 / 73 / SBT Thầy NTTMK : Hãy kiểm tra mảng số nguyên có thỏa mãn tính
//chất sau không : "Mảng không có tồn tại số hoàn thiện lớn hơn 256".Nếu thỏa trả
//về 1, nếu không trả về 0 .
int laSoHoanThien(int num) {
	int sum = 0;
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	return sum == num;
}

// Hàm kiểm tra xem mảng có thỏa mãn tính chất hay không
int mangKhongTonTaiSoHoanThienLonHon256(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] > 256 && laSoHoanThien(arr[i])) {
			return 0; // Mảng có tồn tại số hoàn thiện lớn hơn 256
		}
	}
	return 1; // Mảng không tồn tại số hoàn thiện lớn hơn 256
}
//Bài 245 / 73 / SBT Thầy NTTMK : Hãy cho biết mảng các số nguyên có toàn số chẵn
//hay không ? Nếu có tồn tại giá trị lẻ trả về giá trị 0, ngược lại trả về 1 .
int mangToanSoChan(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			return 0; // Tìm thấy giá trị lẻ
		}
	}
	return 1; // Mảng toàn số chẵn
}
//Bài 246 / 73 / SBT Thầy NTTMK : Hãy kiểm tra mảng một chiều các số thực có đối
//xứng hay không ?
int mangDoiXung(float arr[], int n) {
	for (int i = 0; i < n / 2; i++) {
		if (arr[i] != arr[n - 1 - i]) {
			return 0; // Mảng không đối xứng
		}
	}
	return 1; // Mảng đối xứng
}

//Bài 247 / 73 / SBT Thầy NTTMK : Ta định nghĩa một mảng có tính chẵn lẻ, khi tổng
//của hai phần tử liên tiếp trong mảng luôn luôn là số lẻ.Hãy viết hàm kiểm tra mảng
//a có tính chẵn lẻ hay không ?
int mangCoTinhChatChanLe(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		if ((arr[i] + arr[i + 1]) % 2 == 0) {
			return 0; // Mảng không có tính chất "chẵn lẻ"
		}
	}
	return 1; // Mảng có tính chất "chẵn lẻ"
}
//Bài 248 / 73 / SBT Thầy NTTMK : Hãy kiểm tra mảng có tăng dần hay không ?
int mangTangDan(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[i - 1]) {
			return 0; // Mảng không tăng dần
		}
	}
	return 1; // Mảng tăng dần
}
//Bài 249 / 73 / SBT Thầy NTTMK : Hãy kiểm tra mảng có giảm dần hay không ?
// Hàm kiểm tra xem mảng có giảm dần không
int mangGiamDan(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		if (arr[i] > arr[i - 1]) {
			return 0; // Mảng không giảm dần
		}
	}
	return 1; // Mảng giảm dần
}
//Bài 250 / 73 / SBT Thầy NTTMK : Hãy cho biết các phần tử trong mảng có lập thành
//cấp số cộng không ? Nếu có hãy chỉ ra công sai d .
int kiemTraCapSoCong(int arr[], int n) {
	if (n <= 2) {
		return 0; // Không đủ phần tử để tạo cấp số cộng
	}

	int d = arr[1] - arr[0]; // Giả sử công sai là chênh lệch giữa hai phần tử đầu tiên

	for (int i = 2; i < n; i++) {
		if (arr[i] - arr[i - 1] != d) {
			return 0; // Các phần tử không tạo thành cấp số cộng
		}
	}

	return d; // Trả về công sai (d)
}
//Bài 251 / 73 / SBT Thầy NTTMK : Hãy cho biết các phần tử trong mảng có bằng nhau
//không ?
int kiemTraBangNhau(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		if (arr[i] != arr[0]) {
			return 0; // Có ít nhất một phần tử khác biệt
		}
	}
	return 1; // Các phần tử bằng nhau
}
//Bài 251 / 73 / SBT Thầy NTTMK : Cách 2 : Hãy cho biết các phần tử trong mảng có
//bằng nhau không ?
int kiemTraBangNhau(int arr[], int n) {
	int temp = arr[0]; // Lưu trữ phần tử đầu tiên

	for (int i = 1; i < n; i++) {
		if (arr[i] != temp) {
			return 0; // Có ít nhất một phần tử khác biệt
		}
	}
	return 1; // Các phần tử bằng nhau
}
//Bài 252 / 73 / SBT Thầy NTTMK : Người ta định nghĩa một mảng được gọi là "dạng 
//sóng" khi phần tử có trị số i lớn hơn hoặc nhỏ hơn hai phần tử xung quanh nó.Hãy 
//viết hàm kiểm tra mảng có dạng sóng hay không ?
int mangDangSong(int arr[], int n) {
	if (n <= 2) {
		return 1; // Mảng có ít hơn 3 phần tử, nó luôn có dạng sóng
	}

	for (int i = 1; i < n - 1; i++) {
		if ((arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) || (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])) {
			continue; // Phần tử i là điểm cao hoặc điểm thấp trong dạng sóng
		}
		else {
			return 0; // Mảng không có dạng sóng
		}
	}
	return 1; // Mảng có dạng sóng
}
//Bài 254 / 74 / SBT Thầy NTTMK : Hãy đếm số lượng giá trị trong mảng thỏa tính chất
//	: "lớn hơn tất cả các giá trị đứng đằng trước nó".

int demGiaTriLonHonTruoc(int arr[], int n) {
	int count = 0;
	int maxSoFar = arr[0]; // Khởi tạo giá trị lớn nhất hiện tại là phần tử đầu tiên

	for (int i = 1; i < n; i++) {
		if (arr[i] > maxSoFar) {
			count++;
			maxSoFar = arr[i]; // Cập nhật giá trị lớn nhất hiện tại
		}
	}

	return count;
}
/** KỸ THUẬT SẮP XẾP **/


	/*Bài 255 / 74 / SBT Thầy NTTMK : Hãy sắp xếp các giá trị trong mảng các số thực
	tăng dần.*/
	// Hàm hoán đổi giá trị của hai số thực
void HoanVi(int& a, int& b) {
	a = a - b;// viết đại 
	b = a + b; /// b = a 
	a = b - a;// a = b 

}

// Hàm sắp xếp mảng tăng dần bằng Bubble Sort
void InterchangSort_Tang(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {// i< n - 1 là thằng áp cuối vd a - b -c - d thì nó sẽ là c 
		for (int j = i + 1; j < n; j++) {///j = i + 1 là thằng đứng sau a để cho nó lớn hơn 
			if (a[i] > a[j]) {
				HoanVi(a[i], a[j]);
			}
		}
	}
}
	/*Bài 256 / 74 / SBT Thầy NTTMK : Hãy sắp xếp các giá trị trong mảng các số nguyên
	giảm dần.*/
void InterchangSort_Giam(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {// i< n - 1 là thằng áp cuối vd a - b -c - d thì nó sẽ là c 
		for (int j = i + 1; j < n; j++) {///j = i + 1 là thằng đứng sau a để cho nó lớn hơn 
			if (a[i] < a[j]) {
				HoanVi(a[i], a[j]);
			}
		}
	}
}

	/*Bài 257 / 74 / SBT Thầy NTTMK : Hãy sắp xếp các giá trị tại các vị trí lẻ trong mảng
	tăng dần.Các giá trị khác giữ nguyên giá trị và vị trí .*/
void sapXepViTriLe(float arr[], int n) {
	for (int i = 1; i < n; i += 2) {
		for (int j = i + 2; j < n; j += 2) {
			if (arr[i] > arr[j]) {
				// Hoán đổi giá trị tại các vị trí lẻ nếu cần
				float temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
	/*Bài 258 / 74 / SBT Thầy NTTMK : Hãy sắp xếp các số nguyên tố trong mảng các số
	nguyên tăng dần, các giá trị khác giữ nguyên giá trị và vị trí.*/
	// Hàm kiểm tra một số có phải là số nguyên tố hay không
//int laSoNguyenTo(int n) {
//	if (n <= 1) {
//		return 0; // Không phải số nguyên tố
//	}
//	for (int i = 2; i * i <= n; i++) {
//		if (n % i == 0) {
//			return 0; // Không phải số nguyên tố
//		}
//	}
//	return 1; // Là số nguyên tố
//}

// Hàm sắp xếp các số nguyên tố trong mảng tăng dần
//void sapXepSoNguyenTo(int arr[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (laSoNguyenTo(arr[i]) && laSoNguyenTo(arr[j]) && arr[i] > arr[j]) {
//				// Hoán đổi giá trị nếu cả hai số là số nguyên tố và đứng sai thứ tự
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
	/*Bài 260 / 75 / SBT Thầy NTTMK : Cho hai mảng a và b.Hãy cho biết mảng b có phải
	là hoán vị của mảng a hay không ? .*/
void sapXepMang(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				// Hoán đổi giá trị nếu cần
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

// Hàm kiểm tra xem mảng b có là hoán vị của mảng a không
int laHoanVi(int a[], int b[], int n) {
	// Sắp xếp cả hai mảng
	sapXepMang(a, n);
	sapXepMang(b, n);

	// So sánh hai mảng sau khi sắp xếp
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			return 0; // Mảng b không là hoán vị của mảng a
		}
	}
	return 1; // Mảng b là hoán vị của mảng a
}
	/*Bài 261 / 75 / SBT Thầy NTTMK : Hãy sắp xếp các số dương trong mảng các số thực
	tăng dần, các số âm giữ nguyên vị trí của chúng trong mảng.*/

	// Hàm sắp xếp các số dương trong mảng tăng dần
void sapXepSoDuong(float arr[], int n) {
	int i, j;

	// Sắp xếp các số dương
	for (i = 0; i < n; i++) {
		if (arr[i] > 0) {
			for (j = i + 1; j < n; j++) {
				if (arr[j] > 0 && arr[i] > arr[j]) {
					// Hoán đổi các số dương nếu cần
					float temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
}
	/*Bài 262 / 75 / SBT Thầy NTTMK : Hãy sắp xếp các số chẵn trong mảng các số
	nguyên tăng dần, các số lẻ cũng tăng dần.Vị trí tương đối giữa các số chẵn và số lẻ
	không đổi.*/
	// Hàm sắp xếp mảng tăng dần
//void sapXepMang(int arr[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (arr[i] > arr[j]) {
//				// Hoán đổi giá trị nếu cần
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//// Hàm sắp xếp các số chẵn và số lẻ tăng dần
//void sapXepChanLe(int arr[], int n) {
//	int chans[n], les[n];
//	int chans_count = 0, les_count = 0;
//
//	// Chia mảng thành hai mảng con: một chứa số chẵn và một chứa số lẻ
//	for (int i = 0; i < n; i++) {
//		if (arr[i] % 2 == 0) {
//			chans[chans_count++] = arr[i];
//		}
//		else {
//			les[les_count++] = arr[i];
//		}
//	}
//
//	// Sắp xếp mảng chans (số chẵn) và mảng les (số lẻ)
//	sapXepMang(chans, chans_count);
//	sapXepMang(les, les_count);
//
//	// Kết hợp lại mảng ban đầu
//	int chan_index = 0, le_index = 0;
//	for (int i = 0; i < n; i++) {
//		if (arr[i] % 2 == 0) {
//			arr[i] = chans[chan_index++];
//		}
//		else {
//			arr[i] = les[le_index++];
//		}
//	}
//}
	/*Bài 263 / 75 / SBT Thầy NTTMK : Hãy sắp xếp các số dương trong mảng tăng
	dần, các số âm giảm dần.Vị trí tương đối giữa các số âm và số dương không đổi.*/
	// Hàm sắp xếp mảng tăng dần


	/*Bài 264 / 75 / SBT Thầy NTTMK : Hãy trộn hai mảng tăng dần lại thành 1 mảng được
	sắp thứ tự tăng dần .*/
//void interchangeSort(int arr[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (arr[i] > arr[j]) {
//				// Hoán đổi giá trị nếu cần
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//int arr1[n1], arr2[n2]; // Khai báo hai mảng các số nguyên

//printf("Nhập các số nguyên của mảng 1 (tăng dần):\n");
//for (int i = 0; i < n1; i++) {
//	scanf("%d", &arr1[i]);
//}
//
//printf("Nhập các số nguyên của mảng 2 (tăng dần):\n");
//for (int i = 0; i < n2; i++) {
//	scanf("%d", &arr2[i]);
//}
//
//// Gộp hai mảng vào một mảng mới
//int n = n1 + n2;
//int arr[n];
//
//for (int i = 0; i < n1; i++) {
//	arr[i] = arr1[i];
//}
//for (int i = 0; i < n2; i++) {
//	arr[i + n1] = arr2[i];
//}
//
//// Sắp xếp mảng mới bằng Interchange Sort
//interchangeSort(arr, n);

	/*Bài 265 / 75 / SBT Thầy NTTMK : Cho hai mảng tăng dần, hãy trộn hai mảng lại thành
	một mảng được sắp thứ tự giảm dần .*/



	// Hàm trộn hai mảng tăng dần lại thành một mảng sắp thứ tự giảm dần
//void interchangeSort(int arr[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (arr[i] < arr[j]) {
//				// Hoán đổi giá trị nếu cần
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	int n1, n2; // Số phần tử trong hai mảng
//	printf("Nhập số phần tử của mảng 1: ");
//	scanf("%d", &n1);
//	printf("Nhập số phần tử của mảng 2: ");
//	scanf("%d", &n2);
//
//	int arr1[n1], arr2[n2]; // Khai báo hai mảng các số nguyên
//
//	printf("Nhập các số nguyên của mảng 1 (tăng dần):\n");
//	for (int i = 0; i < n1; i++) {
//		scanf("%d", &arr1[i]);
//	}
//
//	printf("Nhập các số nguyên của mảng 2 (tăng dần):\n");
//	for (int i = 0; i < n2; i++) {
//		scanf("%d", &arr2[i]);
//	}
//
//	// Gộp hai mảng vào một mảng mới
//	int n = n1 + n2;
//	int arr[n];
//
//	for (int i = 0; i < n1; i++) {
//		arr[i] = arr1[i];
//	}
//	for (int i = 0; i < n2; i++) {
//		arr[i + n1] = arr2[i];
//	}
//
//	// Sắp xếp mảng mới bằng Interchange Sort để giảm dần
//	interchangeSort(arr, n);
//
//	printf("Mảng sau khi trộn và sắp xếp giảm dần:\n");
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
	/*Bài 267 & 270 / 76 / SBT Thầy NTTMK : Viết chương trình thực hiện các yêu cầu
	sau : Nhập mảng n số nguyên từ bàn phím sao cho khi nhập xong các phần tử trong
	mảng được sắp theo thứ tự tăng dần . (không sắp xếp sau khi nhập) (nhập bảo toàn)*/


	/*Bài 268 / 76 / SBT Thầy NTTMK : Hãy tạo mảng b từ mảng a các giá trị 0, 1 để mảng
	có tính " tính chẵn lẻ " .*/
	// Hàm để tạo mảng b từ mảng a thể hiện tính chẵn lẻ
void createEvenOddArray(int arrA[], int arrB[], int n) {
	for (int i = 0; i < n; i++) {
		if (arrA[i] % 2 == 0) {
			arrB[i] = 0; // Phần tử chẵn
		}
		else {
			arrB[i] = 1; // Phần tử lẻ
		}
	}
}

// Hàm sắp xếp mảng tăng dần bằng Interchange Sort
void interchangeSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				// Hoán đổi giá trị nếu cần
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

	/*Đề Bài 1 : Nhập vào 1 mảng A các số nguyên và sắp xếp mảng A trên theo quy luật
	: +Các số dương(nếu có) ở đầu mảng và có thứ tự giảm dần. + Các số âm(nếu có)
	ở cuối mảng và có thứ tự tăng dần .*/
	// Hàm để hoán đổi hai phần tử trong mảng
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// Hàm sắp xếp mảng theo quy luật đã yêu cầu
void customSort(int arr[], int n) {
	// Sắp xếp các số dương ở đầu mảng theo thứ tự giảm dần
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < 0 && arr[j] >= 0) {
				// Hoán đổi hai phần tử nếu phần tử đầu tiên âm, và phần tử thứ hai dương
				swap(arr[i], arr[j]);
			}
		}
	}

	// Sắp xếp các số âm ở cuối mảng theo thứ tự tăng dần
	int positiveIndex = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] >= 0) {
			positiveIndex = i;
			break;
		}
	}

	for (int i = positiveIndex; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				// Hoán đổi hai phần tử nếu phần tử đầu tiên lớn hơn phần tử thứ hai
				swap(arr[i], arr[j]);
			}
		}
	}
}
	/*Đề Bài 2 : Nhập vào 1 mảng A các số nguyên và sắp xếp mảng A trên theo quy luật
	: +Các số chẵn(nếu có) ở đầu mảng và có thứ tự tăng dần. + Các số lẻ(nếu có) ở
	cuối mảng và có thứ tự giảm dần .*/
	// Hàm sắp xếp mảng theo quy luật đã yêu cầu
void customSort(int arr[], int n) {
	// Sắp xếp các số chẵn ở đầu mảng theo thứ tự tăng dần
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] % 2 != 0 && arr[j] % 2 == 0) {
				// Hoán đổi hai phần tử nếu phần tử đầu tiên là số lẻ, và phần tử thứ hai là số chẵn
				swap(arr[i], arr[j]);
			}
		}
	}

	// Tìm vị trí đầu tiên của số lẻ trong mảng
	int oddIndex = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			oddIndex = i;
			break;
		}
	}

	// Sắp xếp các số lẻ ở cuối mảng theo thứ tự giảm dần
	for (int i = oddIndex; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				// Hoán đổi hai phần tử nếu phần tử đầu tiên nhỏ hơn phần tử thứ hai
				swap(arr[i], arr[j]);
			}
		}
	}
}

	/*Đề Bài 3 : Phát sinh ngẫu nhiên mảng các số nguyên và sau đó sắp xếp mảng các số
	nguyên này tăng dần .*/
	// Hàm để phát sinh mảng các số nguyên ngẫu nhiên

	/*Đề Bài 4 : Nhập vào 1 mảng A các số nguyên và tìm ra phần tử lớn thứ 3 trong
	mảng .*/

	// Hàm để tìm phần tử lớn thứ 3 trong mảng
int findThirdLargest(int arr[], int n) {
	if (n < 3) {
		printf("Mang khong co phan tu lon thu 3.\n");
		return -1; // Trả về giá trị âm để biểu thị không tìm thấy phần tử lớn thứ 3
	}

	int firstLargest = arr[0];
	int secondLargest = arr[0];
	int thirdLargest = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] > firstLargest) {
			thirdLargest = secondLargest;
			secondLargest = firstLargest;
			firstLargest = arr[i];
		}
		else if (arr[i] > secondLargest && arr[i] != firstLargest) {
			thirdLargest = secondLargest;
			secondLargest = arr[i];
		}
		else if (arr[i] > thirdLargest && arr[i] != secondLargest) {
			thirdLargest = arr[i];
		}
	}

	return thirdLargest;
}

	/*Đề Bài 5 : Áp dụng nâng cao Thuật Toán Sắp Xếp : Cho dãy số nguyên A như sau :
12 2 15 - 3 8 5 1 - 8 6 0 4 15.Yêu Cầu : 1.Sắp xếp dãy trên tăng dần . 2.Suy ra số
lớn thứ 3 trong dãy . 3.Suy ra số lượng phần tử lớn nhất trong dãy . 4.Sắp xếp
dãy trên theo thứ tự giá trị tuyệt đối tăng dần . 5.Sắp xếp dãy trên theo quy luật
sau : +Các số dương(nếu có) ở đầu mảng và có thứ tự giảm dần . + Các số âm
(nếu có) ở cuối mảng và có thứ tự tăng dần . 6.Sắp xếp dãy trên theo quy luật sau
	: +Các số chẵn(nếu có) ở đầu mảng và có thứ tự tăng dần . + Các số lẻ(nếu có) ở
	cuối mảng và có thứ tự giảm dần .*/
	// Hàm để sắp xếp mảng tăng dần
void sortAscending(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				// Hoán đổi hai phần tử nếu phần tử đầu tiên lớn hơn phần tử thứ hai
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

// Hàm để tìm phần tử lớn thứ 3 trong mảng
int findThirdLargest(int arr[], int n) {
	if (n < 3) {
		printf("Mang khong co phan tu lon thu 3.\n");
		return -1; // Trả về giá trị âm để biểu thị không tìm thấy phần tử lớn thứ 3
	}

	int firstLargest = arr[0];
	int secondLargest = arr[0];
	int thirdLargest = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] > firstLargest) {
			thirdLargest = secondLargest;
			secondLargest = firstLargest;
			firstLargest = arr[i];
		}
		else if (arr[i] > secondLargest && arr[i] != firstLargest) {
			thirdLargest = secondLargest;
			secondLargest = arr[i];
		}
		else if (arr[i] > thirdLargest && arr[i] != secondLargest) {
			thirdLargest = arr[i];
		}
	}

	return thirdLargest;
}

// Hàm để tìm số lượng phần tử lớn nhất trong mảng
int countLargest(int arr[], int n) {
	int maxx = arr[0];
	int count = 1;

	for (int i = 1; i < n; i++) {
		if (arr[i] > maxx) {
			maxx = arr[i];
			count = 1;
		}
		else if (arr[i] == maxx) {
			count++;
		}
	}

	return count;
}

// Hàm để sắp xếp mảng theo thứ tự giá trị tuyệt đối tăng dần
void sortAbsoluteAscending(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (abs(arr[i]) > abs(arr[j])) {
				// Hoán đổi hai phần tử nếu giá trị tuyệt đối của phần tử đầu tiên lớn hơn
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}



	/** KỸ THUẬT THÊM **/

	/*Bài 266 / 75 / SBT Thầy NTTMK : Hãy thêm một phần tử có giá trị x vào mảng tại vị
	trí k .*/
	void ThemPhanTu(int a[], int& n, int k, int x) {
		// Kiểm tra xem k có nằm trong phạm vi của mảng không
		if (k < 0 || k > n) {
			printf("Vi tri k khong hop le.\n");
			return;
		}

		// Dịch chuyển các phần tử phía sau vị trí k sang phải để tạo không gian cho phần tử mới
		for (int i = n; i > k; i--) {
			a[i] = a[i - 1];
		}

		// Gán giá trị x vào vị trí k
		a[k] = x;

		// Tăng số lượng phần tử trong mảng lên 1
		n++;
	}
	/*Bài 269 / 76 / SBT Thầy NTTMK : Hãy thêm một giá trị x vào trong mảng tăng mà
	vẫn giữ nguyên tính đơn điệu tăng của mảng .*/
	// Hàm để thêm giá trị x vào mảng tăng
	void ThemGiaTriTang(int a[], int& n, int x) {
		int i;
		// Tìm vị trí thích hợp để chèn giá trị x sao cho mảng vẫn tăng
		for (i = 0; i < n; i++) {
			if (a[i] >= x) {
				break;
			}
		}

		// Dịch chuyển các phần tử phía sau vị trí chèn sang phải
		for (int j = n; j > i; j--) {
			a[j] = a[j - 1];
		}

		// Gán giá trị x vào vị trí thích hợp
		a[i] = x;

		// Tăng số lượng phần tử trong mảng lên 1
		n++;
	}
	/** KỸ THUẬT XÓA **/
	void XoaPhanTu(int a[], int& n, int k) {
		// Kiểm tra xem k có nằm trong phạm vi của mảng không
		if (k < 0 || k >= n) {
			printf("Vi tri k khong hop le.\n");
			return;
		}

		// Di chuyển các phần tử phía sau vị trí k sang trái để lấp đầy vị trí bị xóa
		for (int i = k; i < n - 1; i++) {
			a[i] = a[i + 1];
		}

		// Giảm số lượng phần tử trong mảng đi 1
		n--;
	}
	/*Bài 271 / 76 / SBT Thầy NTTMK : Xóa các phần tử có chỉ số k trong mảng .*/

	/*Bài 272 / 76 / SBT Thầy NTTMK : Hãy xóa tất cả số lớn nhất trong mảng các số thực .*/

	// Hàm để xóa tất cả các số lớn nhất trong mảng số thực
	void XoaSoLonNhat(float a[], int& n) {
		// Tìm giá trị lớn nhất trong mảng
		float maxx = -42423;
		for (int i = 0; i < n; i++) {
			if (a[i] > maxx) {
				maxx = a[i];
			}
		}

		int j = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] != maxx) {
				a[j] = a[i];
				j++;
			}
		}

		// Cập nhật số lượng phần tử sau khi xóa số lớn nhất
		n = j;
	}
	/*Bài 273 / 76 / SBT Thầy NTTMK : Hãy xóa tất cả các số âm trong mảng các số thực .*/
	void XoaSoAm(float a[], int& n, int vitrixoa) {
		// Kiểm tra vị trí cần xóa có hợp lệ hay không
		if (vitrixoa < 0 || vitrixoa >= n) {
			printf("Vi tri xoa khong hop le.\n");
			return;
		}

		// Duyệt qua mảng và sao chép các phần tử không âm vào mảng mới
		int j = 0;
		for (int i = 0; i < n; i++) {
			if (i != vitrixoa && a[i] >= 0) {
				a[j] = a[i];
				j++;
			}
		}

		// Cập nhật số lượng phần tử sau khi xóa số âm
		n = j;
	}
	/*Bài 274 / 76 / SBT Thầy NTTMK : Hãy xóa tất cả số chẵn trong mảng các số nguyên .*/
	// Hàm để xóa tất cả các số chẵn trong mảng số nguyên
	void XoaSoChan(int a[], int& n, int vitrixoa) {
		// Kiểm tra vị trí cần xóa có hợp lệ hay không
		if (vitrixoa < 0 || vitrixoa >= n) {
			printf("Vi tri xoa khong hop le.\n");
			return;
		}

		// Duyệt qua mảng và sao chép các phần tử không chẵn vào mảng mới
		int j = 0;
		for (int i = 0; i < n; i++) {
			if (i != vitrixoa && a[i] % 2 != 0) {
				a[j] = a[i];
				j++;
			}
		}

		// Cập nhật số lượng phần tử sau khi xóa số chẵn
		n = j;
	}
	/*Bài 275 / 77 / SBT Thầy NTTMK : Hãy xóa tất cả "số chính phương" trong mảng một
	chiều các số nguyên .*/
	// Hàm kiểm tra một số có phải là số chính phương hay không
	int LaSoChinhPhuong(int num) {
		int sqrtNum = sqrt(num);
		return (sqrtNum * sqrtNum == num);
	}

	// Hàm để xóa tất cả các số chính phương trong mảng số nguyên
	void XoaSoChinhPhuong(int a[], int& n, int vitrixoa) {
		// Kiểm tra vị trí cần xóa có hợp lệ hay không
		if (vitrixoa < 0 || vitrixoa >= n) {
			printf("Vi tri xoa khong hop le.\n");
			return;
		}

		// Duyệt qua mảng và sao chép các phần tử không là số chính phương vào mảng mới
		int j = 0;
		for (int i = 0; i < n; i++) {
			if (i != vitrixoa && LaSoChinhPhuong(a[i])) {
				a[j] = a[i];
				j++;
			}
		}

		// Cập nhật số lượng phần tử sau khi xóa số chính phương
		n = j;
	}
	/*Bài 276 / 77 / SBT Thầy NTTMK : Hãy xóa tất cả các phần tử có giá trị trùng với x .*/
	// Hàm để xóa tất cả các phần tử có giá trị trùng với x trong mảng số nguyên
	void XoaGiaTriTrung(int a[], int& n, int x) {
		int j = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] != x) {
				a[j] = a[i];
				j++;
			}
		}

		// Cập nhật số lượng phần tử sau khi xóa giá trị trùng
		n = j;
	}
	/*Bài 277 / 77 / SBT Thầy NTTMK : Hãy xóa tất cả các "số nguyên tố" có trong mảng
	số nguyên .*/

	// Hàm để xóa tất cả các số nguyên tố trong mảng số nguyên
	// Hàm kiểm tra một số có phải là số nguyên tố hay không
	int LaSoNguyenTo(int num) {
		if (num <= 1) {
			return 0; // Không phải số nguyên tố
		}
		if (num <= 3) {
			return 1; // Là số nguyên tố
		}
		if (num % 2 == 0 || num % 3 == 0) {
			return 0; // Không phải số nguyên tố
		}
		for (int i = 5; i * i <= num; i += 6) {
			if (num % i == 0 || num % (i + 2) == 0) {
				return 0; // Không phải số nguyên tố
			}
		}
		return 1; // Là số nguyên tố
	}
	void XoaSoNguyenTo(int a[], int& n, int vitrixoa) {
		// Kiểm tra vị trí cần xóa có hợp lệ hay không
		if (vitrixoa < 0 || vitrixoa >= n) {
			printf("Vi tri xoa khong hop le.\n");
			return;
		}

		// Duyệt qua mảng và sao chép các phần tử không là số nguyên tố vào mảng mới
		int j = 0;
		for (int i = 0; i < n; i++) {
			if (i != vitrixoa && LaSoNguyenTo(a[i])) {
				a[j] = a[i];
				j++;
			}
		}

		// Cập nhật số lượng phần tử sau khi xóa số nguyên tố
		n = j;
	}
	/*Bài 278 / 77 / SBT Thầy NTTMK : Hãy xóa tất cả các phần tử trùng nhau trong mảng
	và chỉ giữ lại duy nhất một phần tử .*/
	int removeDuplicates(int arr[], int n) {
		if (n <= 1) {
			return n; // Trường hợp mảng rỗng hoặc chỉ có một phần tử, không cần làm gì cả
		}

		int index = 1; // Index để duyệt qua mảng đã sắp xếp
		for (int i = 1; i < n; i++) {
			int j;
			// Kiểm tra xem arr[i] có giống với các phần tử trước đó không
			for (j = 0; j < index; j++) {
				if (arr[i] == arr[j]) {
					break; // Nếu trùng, thoát khỏi vòng lặp
				}
			}
			// Nếu arr[i] không trùng với các phần tử trước đó, thêm nó vào mảng
			if (j == index) {
				arr[index] = arr[i];
				index++;
			}
		}

		return index; // Trả về số lượng phần tử sau khi đã loại bỏ các phần tử trùng nhau
	}
	/*Bài 279 / 77 / SBT Thầy NTTMK : Hãy xóa tất cả các phần tử có tần suất xuất hiện
	trong mảng nhiều hơn một lần .*/
	// Hàm kiểm tra xem một phần tử có xuất hiện trong mảng nhiều hơn một lần không
	int isDuplicate(int arr[], int n, int element) {
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] == element) {
				count++;
				if (count > 1) {
					return 1; // Phần tử có tần suất xuất hiện nhiều hơn một lần
				}
			}
		}
		return 0; // Phần tử chỉ xuất hiện một lần
	}

	// Hàm xóa tất cả các phần tử có tần suất xuất hiện nhiều hơn một lần trong mảng
	int removeDuplicates(int arr[], int & n) {
		if (n <= 1) {
			return n; // Trường hợp mảng rỗng hoặc chỉ có một phần tử, không cần làm gì cả
		}

		int index = 1; // Index để duyệt qua mảng đã sắp xếp
		for (int i = 1; i < n; i++) {
			int isDup = isDuplicate(arr, i, arr[i]);
			if (!isDup) {
				arr[index] = arr[i];
				index++;
			}
		}

		n = index; // Cập nhật số lượng phần tử sau khi xóa các phần tử trùng nhau
		return n;
	}
	/** KỸ THUẬT XỬ LÝ MẢNG **/

	/*Bài 280 / 77 / SBT Thầy NTTMK : Hãy đưa số một về đầu mảng .*/
	// Hàm hoán đổi hai phần tử trong mảng
	void swap(int arr[], int i, int j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	// Hàm đưa số một về đầu mảng
	void moveOneToFront(int arr[], int n) {
		int oneIndex = -1; // Vị trí của số 1 trong mảng, ban đầu không tìm thấy
		for (int i = 0; i < n; i++) {
			if (arr[i] == 1) {
				if (oneIndex == -1) {
					oneIndex = i; // Lưu lại vị trí của số 1 nếu đây là lần đầu gặp
				}
			}
			else if (oneIndex != -1) {
				// Nếu gặp số khác 1 sau khi đã gặp số 1, hoán đổi vị trí của chúng
				swap(arr, oneIndex, i);
				oneIndex++;
			}
		}
	}
	
	/*Bài 281 / 77 / SBT Thầy NTTMK : Hãy đưa các số chẵn trong mảng về đầu mảng, số
	lẻ về cuối mảng và các phần tử 0 nằm ở giữa .*/
	// Hàm sắp xếp các số chẵn, số lẻ và số 0 trong mảng
	void sortArray(int arr[], int n) {
		int evenIndex = 0; // Vị trí bắt đầu cho các số chẵn
		int oddIndex = n - 1; // Vị trí bắt đầu cho các số lẻ
		int i = 0;

		while (i <= oddIndex) {
			if (arr[i] == 0) {
				// Nếu gặp số 0, di chuyển nó vào giữa mảng và tăng chỉ số
				swap(arr, i, evenIndex);
				i++;
				evenIndex++;
			}
			else if (arr[i] % 2 == 0) {
				// Nếu gặp số chẵn, di chuyển nó vào đầu mảng và tăng chỉ số
				swap(arr, i, evenIndex);
				i++;
				evenIndex++;
			}
			else {
				// Nếu gặp số lẻ, di chuyển nó vào cuối mảng
				swap(arr, i, oddIndex);
				oddIndex--;
			}
		}
	}
	/*Bài 282 / 77 / SBT Thầy NTTMK : Hãy đưa các số chia hết cho 3 về đầu mảng .*/
	void moveDivisibleBy3ToFront(int arr[], int n) {
		int divisibleBy3Index = 0; // Vị trí bắt đầu cho các số chia hết cho 3
		for (int i = 0; i < n; i++) {
			if (arr[i] % 3 == 0) {
				// Nếu gặp số chia hết cho 3, di chuyển nó vào đầu mảng và tăng chỉ số
				swap(arr, i, divisibleBy3Index);
				divisibleBy3Index++;
			}
		}
	}
	//Bài 283 / 77 / SBT Thầy NTTMK : Hãy đảo ngược mảng ban đầu .
	// Hàm đảo ngược mảng
	void reverseArray(int arr[], int n) {
		int left = 0;          // Vị trí bắt đầu từ đầu mảng
		int right = n - 1;     // Vị trí bắt đầu từ cuối mảng

		while (left < right) {
			// Hoán đổi phần tử tại vị trí left và right
			swap(arr, left, right);
			left++;            // Di chuyển left sang phải
			right--;           // Di chuyển right sang trái
		}
	}
	/*Bài 284 / 77 / SBT Thầy NTTMK : Hãy đảo ngược thứ tự các số chẵn có trong mảng .*/
	// Hàm đảo ngược thứ tự các số chẵn trong mảng
	void reverseEvenNumbers(int arr[], int n) {
		int left = 0;          // Vị trí bắt đầu từ đầu mảng
		int right = n - 1;     // Vị trí bắt đầu từ cuối mảng

		while (left < right) {
			// Di chuyển left sang phải để tìm số chẵn đầu tiên từ đầu mảng
			while (left < right && arr[left] % 2 != 0) {
				left++;
			}

			// Di chuyển right sang trái để tìm số chẵn đầu tiên từ cuối mảng
			while (left < right && arr[right] % 2 != 0) {
				right--;
			}

			// Hoán đổi các số chẵn tìm thấy ở vị trí left và right
			swap(arr, left, right);
			left++;   // Di chuyển left sang phải
			right--;  // Di chuyển right sang trái
		}
	}
	/*Bài 285 / 78 / SBT Thầy NTTMK : Hãy đảo ngược thứ tự các số dương có trong mảng*/
		// Hàm đảo ngược thứ tự các số dương trong mảng
		void reversePositiveNumbers(int arr[], int n) {
			int left = 0;          // Vị trí bắt đầu từ đầu mảng
			int right = n - 1;     // Vị trí bắt đầu từ cuối mảng

			while (left < right) {
				// Di chuyển left sang phải để tìm số dương đầu tiên từ đầu mảng
				while (left < right && arr[left] >= 0) {
					left++;
				}

				// Di chuyển right sang trái để tìm số dương đầu tiên từ cuối mảng
				while (left < right && arr[right] >= 0) {
					right--;
				}

				// Hoán đổi các số dương tìm thấy ở vị trí left và right
				swap(arr, left, right);
				left++;   // Di chuyển left sang phải
				right--;  // Di chuyển right sang trái
			}
		}

	/*Bài 286 / 78 / SBT Thầy NTTMK : Hãy "dịch trái xoay vòng" các phần tử trong mảng
	.*/
		void rotateLeftCircular(int arr[], int n) {
			if (n <= 1) {
				// Không cần xoay nếu mảng có ít hơn hoặc bằng 1 phần tử
				return;
			}

			int temp = arr[0];  // Lưu giá trị của phần tử đầu tiên
			for (int i = 0; i < n - 1; i++) {
				arr[i] = arr[i + 1];  // Dịch phần tử sang trái
			}
			arr[n - 1] = temp;  // Gán giá trị của phần tử đầu tiên vào cuối mảng
		}

	/*Bài 287 / 78 / SBT Thầy NTTMK : Hãy "dịch phải xoay vòng" k lần các phần tử trong
	mảng .*/
		void rotateRightCircular(int arr[], int n, int k) {
			if (n <= 1 || k <= 0) {
				// Không cần xoay nếu mảng có ít hơn hoặc bằng 1 phần tử, hoặc k <= 0
				return;
			}

			k = k % n;  // Chắc chắn rằng k không lớn hơn n (để tránh xoay nhiều vòng thừa)

			for (int i = 0; i < k; i++) {
				// Dịch phải xoay vòng mảng k lần
				int temp = arr[n - 1];  // Lưu giá trị của phần tử cuối cùng
				for (int j = n - 1; j > 0; j--) {
					arr[j] = arr[j - 1];  // Dịch phần tử sang phải
				}
				arr[0] = temp;  // Gán giá trị lưu trữ vào phần tử đầu tiên
			}
		}
	/*Bài 288 / 78 / SBT Thầy NTTMK : Hãy xuất các phần tử trong mảng theo yêu cầu : Các
	phần tử chẵn có màu vàng, các phần tử lẻ có màu trắng .*/

	/*Bài 289 / 78 / SBT Thầy NTTMK : Hãy xuất mảng theo yêu cầu : Các phần tử chẵn
	nằm trên một hàng, các phần tử lẻ nằm ở hàng tiếp theo .*/

	//Bài 290 / 78 / SBT Thầy NTTMK : Hãy đảo ngược thứ tự các số chẵn và các số lẻ
	//trong mảng mà vẫn giữ nguyên vị trí tương đối của chúng .
		// Hàm để đảo ngược thứ tự của mảng
		void reverseArray(int arr[], int start, int end) {
			while (start < end) {
				int temp = arr[start];
				arr[start] = arr[end];
				arr[end] = temp;
				start++;
				end--;
			}
		}

		// Hàm để đảo ngược thứ tự các số chẵn và số lẻ trong mảng
		void reverseEvenOdd(int arr[], int size) {
			int left = 0;
			int right = size - 1;

			while (left < right) {
				// Tìm phần tử đầu tiên là số lẻ từ bên trái
				while (arr[left] % 2 == 0 && left < right) {
					left++;
				}

				// Tìm phần tử đầu tiên là số chẵn từ bên phải
				while (arr[right] % 2 != 0 && left < right) {
					right--;
				}

				// Nếu left < right thì đổi chỗ hai phần tử này
				if (left < right) {
					int temp = arr[left];
					arr[left] = arr[right];
					arr[right] = temp;
					left++;
					right--;
				}
			}
		}
	/*Bài 291 / 78 / SBT Thầy NTTMK : Hãy biến đổi mảng bằng cách thay các giá trị lớn
	nhất bằng các giá trị nhỏ nhất và ngược lại .*/
	// Hàm để tìm giá trị lớn nhất trong mảng
		int findMax(int arr[], int size) {
			int maxx = arr[0];
			for (int i = 1; i < size; i++) {
				if (arr[i] > maxx) {
					maxx = arr[i];
				}
			}
			return maxx;
		}

		// Hàm để tìm giá trị nhỏ nhất trong mảng
		int findMin(int arr[], int size) {
			int min = arr[0];
			for (int i = 1; i < size; i++) {
				if (arr[i] < min) {
					min = arr[i];
				}
			}
			return min;
		}

		// Hàm để biến đổi mảng bằng cách thay các giá trị lớn nhất bằng giá trị nhỏ nhất và ngược lại
		void transformArray(int arr[], int size) {
			int maxx = findMax(arr, size);
			int min = findMin(arr, size);

			for (int i = 0; i < size; i++) {
				if (arr[i] == maxx) {
					arr[i] = min;
				}
				else if (arr[i] == min) {
					arr[i] = maxx;
				}
			}
		}
	/*Bài 292 / 78 / SBT Thầy NTTMK : Hãy biến đổi mảng bằng cách thay tất cả các phần
	tử trong mảng bằng số nguyên gần nó nhất .*/
		// Hàm để tìm số nguyên gần nhất cho một số thực
			int nearestInteger(double num) {
			int lower = (int)num;
			int upper = lower + 1;

			// Tìm số nguyên gần nhất bằng cách kiểm tra khoảng cách từ num đến lower và upper
			if (num - lower <= upper - num) {
				return lower;
			}
			else {
				return upper;
			}
		}

		// Hàm để biến đổi mảng bằng cách thay tất cả các phần tử bằng số nguyên gần nhất
		void transformArray(double arr[], int size) {
			for (int i = 0; i < size; i++) {
				int nearestInt = nearestInteger(arr[i]);
				arr[i] = (double)nearestInt; // Chuyển về số thực để gán lại vào mảng
			}
		}
	/*Chương trình tổng hợp đổi cơ số 3 hệ : Đổi số nguyên dương n(hệ 10) sang nhị
	phân(hệ 2), sang hệ bát phân(hệ 8) và sang hệ hexa(hệ 16) .*/

	/** KỸ THUẬT XỬ LÝ MẢNG CON**/

	/*Bài 293 / 79 / SBT Thầy NTTMK : Liệt kê tất cả các mảng con trong mảng một chiều
	các số nguyên .*/
		void listSubarrays(int arr[], int size) {
			for (int start = 0; start < size; start++) {
				for (int end = start; end < size; end++) {
					// In các phần tử của mảng con từ vị trí start đến vị trí end
					printf("[");
					for (int i = start; i <= end; i++) {
						printf("%d", arr[i]);
						if (i != end) {
							printf(", ");
						}
					}
					printf("]\n");
				}
			}
		}
	/*Bài 294 / 79 / SBT Thầy NTTMK : Liệt kê tất cả các mảng con có độ dài lớn hơn 2
	trong mảng một chiều các số nguyên .*/

	/*Bài 295 / 79 / SBT Thầy NTTMK : Liệt kê các dãy con tăng trong mảng .*/

	/*Bài 296 / 79 / SBT Thầy NTTMK : Hãy liệt kê các mảng con tăng có chứa giá trị lớn
	nhất trong mảng .*/

	/*Bài 297 / 79 / SBT Thầy NTTMK : Tính tổng từng mảng con tăng trong mảng một
	chiều các số thực .*/

	/*Bài 298 / 79 / SBT Thầy NTTMK : Đếm số lượng mảng con tăng có độ dài lớn hơn 1
	trong mảng một chiều số thực .*/

	/*Bài 299 / 79 / SBT Thầy NTTMK : Liệt kê các dãy con toàn dương có độ dài lớn hơn
	1 trong mảng một chiều số thực .*/

	/*Bài 300 / 79 / SBT Thầy NTTMK : Đếm số lượng mảng con giảm trong mảng một
	chiều các số thực .*/

	/*Bài 301 / 81 / SBT Thầy NTTMK : Cho hai mảng a và b.Hãy cho biết mảng a có phải
	là mảng con của mảng b hay không ?*/

	//Bài 302 / 81 / SBT Thầy NTTMK : Cho hai mảng a và b.Hãy đếm số lần xuất hiện của
	//mảng a trong mảng b ?

	/*Bài 303 / 80 / SBT Thầy NTTMK : Tìm dãy con toàn dương dài nhất trong mảng các
	số thực .*/

	/*Bài 304 / 80 / SBT Thầy NTTMK : Cho mảng một chiều các số nguyên và một số
	nguyên M.Hãy tìm một mảng con sao cho tổng các phần tử trong mảng bằng M .*/

	/** XÂY DỰNG MẢNG **/

	/*Bài 307 / 80 / SBT Thầy NTTMK : Cho mảng một chiều các số nguyên a.Hãy tạo
	mảng b từ mảng a, sao cho mảng b chỉ chứa các giá trị lẻ .*/

	/*Bài 308 / 80 / SBT Thầy NTTMK : Cho mảng một chiều các số thực a.Hãy tạo mảng b
	từ mảng a, sao cho mảng b chỉ chứa các giá trị âm .*/

	/*Bài 309 / 81 / SBT Thầy NTTMK : Cho mảng một chiều các số thực a.Hãy tạo mảng b
	từ mảng a, với b[i] = tổng các phần tử lân cận với a[i] trong mảng a .*/

	/*Bài 310 / 81 / SBT Thầy NTTMK : Cho mảng một chiều các số nguyên a.Hãy tạo
	mảng b từ mảng a, sao cho mảng b chỉ chứa các số nguyên tố trong mảng a .*/

int main() {

	/*nghia:*/
	int a[max];
	int n; // số lượng phần tử của mảng 
	double b[max];
	double m;
	do {
		printf("\nNhap vao so luong phan tu cua mang:");
		scanf_s("%d", &n);
		if (n < 0 || n > max) {
			printf("\nLoi!");
		}
	} while (n < 0 || n > max);
	/*do {
		printf("\nNhap vao so luong phan tu cua mang:");
		scanf_s("%lf", &m);
		if (m < 0 || m > max) {
			printf("\nLoi!");
		}
	} while (m < 0 || m > max);*/


	//for (int i = 0; i < n; i++)
	//{
	// stdlib.h & time.h
	//	 srand(time(0));
	// a + rand() % (b - a + 1)

	// random trong đoạn -20 --> 30

	//a[i] = -20 + rand() % 51;
	//}

//nhập xuất mảng số thực 
	/*NhapMang(b, m);
	XuatMang(b, m);*/

	/*printf("\nVi tri tai do bang gia tri am dau tien la:");
	timGiatriBanggiatriamDauTien(b, m);*/
	/*
	printf("\nChu so lan can trai dau la:");
	lietKelancantraiDau(b, m);*/

	NhapMang(a, n);
	XuatMang(a, n);

	findAndPrintFrequencies(a, n);
	/*int so_luong_gia_tri_phan_biet = dem_so_luong_gia_tri_phan_biet(a, n);
	printf("So luong gia tri phan biet trong mang: %d\n", so_luong_gia_tri_phan_biet);*/
	/*int ket_qua = tongSohangchucla5(a, n);
	printf_s("\nTổng các số có chữ số hàng chục là 5 là: %d", ket_qua);*/

	/*int tongChuleDautien = tingTongcacChuSodautienlaLe(a, n);
	printf("\nTong cac gia tri co chu so dau tien la chu so le: %d", tongChuleDautien);*/
	/*printf("\nTong cua mang la :");
	tinhTongmangduong(a, n);*/

	/*printf("\nGia tri cac so toan le la :");
	kiemTratoanle(a, n);*/
	/*printf("\nGia tri cac so co chu so le dau la :");
	chuSodauTienlaLe(a, n);*/
	/*printf("\nVi tri giong voi so duong nho nhat la:");
	tim_vi_tri_gia_tri_duong_nn(a, n);
	*/



	/*printf("\nVi tri co cac so chinh phuong la:");
	LietKeCacSoChinhPHuong(a, n);*/


	/*printf("\nVi tri co cac so nguyen to la:");
	lietkeCacViTriSonguyenTo(a, n);*/

	/*printf("\nVi tri co gia tri lon nhat la:");
	lietKeviTriLonNhatN(a, n);*/
	//printf("\nChu so lan can chan la:");
	//lietKelancanchan(a, n);

	/*NhapMang(b,m);
	XuatMang(b, m);
	double x = 3;
	double y = 10;
	liet_ke_so_trong_doan(b, m, x, y);*/

	/*int chu_so = tim_chu_so_xuat_hien_it_nhat(a, n);

	if (chu_so != -1) {
		printf("Chữ số xuất hiện ít nhất trong mảng là: %d\n", chu_so);
	}
	else {
		printf("Không có chữ số nào xuất hiện trong mảng.\n");
	}*/

	//int x;
	//timSochinhPhuong(a, n, x);
	//printf("\nSo chinh phuong dau tien la:%d", x);

	/*int so_ganh = tim_so_ganh_dau_tien(a, n);

	if (so_ganh != -1) {
		printf("\nSo ganh dau tien trong mang la: %d", so_ganh);
	}
	else {
		printf("\nKhong tim thay so ganh trong mang.");
	}*/

	/*int Giatriam = TimGiatriamLonNhat(b, m);
	printf("\nGia tri am lon nhat la:%d", Giatriam);*/

	/*int timso = TimSoNguyenToDauTien(a, n);
	printf("\nSo nguyen to dau tien la la:%d", timso);*/

	/*double x;
	int vitri;

	GiaTriDuongNhoNhat(b, m, x, vitri);
	if (vitri == -1) {
		printf("\nVi tri cua no la:%d", vitri);
	}
	printf("\nGia tri duong nho nhat la:%lf", x);
	printf("\nVi tri cua no la:%d", vitri);*/

	//int timUocChung = TimUCLNCuaMang(a, n);
	//printf("\nUoc chung lon nhat cua mang la:%d", timUocChung);

	/*int timSo = TimSoChanLonNhatNhoHonLe(a, n);
	printf("\nGia tri lon nhat nho hon moi so le la:%d", timSo);*/

	/*int timGiaTridautiencodang2muk = TimGiaTriDauTienCoDang2MuK(a, n);
	printf("\nGia tri dau tien la:%d", timGiaTridautiencodang2muk);*/

	//int timvitrilancanthoa = TimViTriLancanThoa(b, n);
	//printf("\nVi tri la:%d",timvitrilancanthoa);

	/*int timgiatridautienthoa = TimGiaTriDauTienThoa(a, n, 10, 20);
	printf("\nGia tri x la:%d", timgiatridautienthoa);*/

	/*double timGiatriamlonhon_1 = TraVeGiaTriAmLonHon_1(b, m);
	printf("\nGia tri x la:%lf", timGiatriamlonhon_1);*/

	/*double timgiatrilonhon2003 = TimGiaTriLonHon2003(b, m);
	printf("\nGia tri x la:%lf", timgiatrilonhon2003);*/

	//double timgiatrix = TimGiaTrix(b, m);
	//printf("\nGia tri x la:%lf", timgiatrix);

	/*
	* trong hàm void ta trả về nhiều giá trị thì dùng cách này và phải dùng tham chiếu nếu không sẽ không chạy được
	double Min, Max;
	TimDoanA_B(b, m, Min, Max);
	printf("\nMin-Max trong doan la:%lf % lf", Min, Max);*/


	/*double GiaTriXaNhat = TimGiaTriXaNhat(b, m, 5);
	printf("\nGia tri xa so 5 nhat la:%4lf",GiaTriXaNhat);*/

	/*printf("\nMang cac so nguyen chan la:\n");
	LietKeCacSoChan(a, n);*/

	/*printf("\nCac so am trong mang la:\n");
	LietKeCacSoAm(b, n);*/

	/*double tmax = TimMax(b, m);
	printf("\nMax: %.2lf\n", tmax);*/


	/*double timduong = TimDuongDauTien(b, m);
	printf("\nSo duong dau tien la:%lf",timduong);*/

	/*int viTri =  TimViTriMin(b, m);
	printf("\nVi tri min dau tien la:%d", viTri);*/

	//goto nghia;

	_getch();
	return 0;

}