#include <stdio.h>
#include <string.h>
typedef enum loai
{
	YEU,
	TBINH,
	KHA,
	GIOI
};

class HocSinh
{
public: float dTB = 0;
public: char ten[32];
	  float diemToan;
	  float diemLy;
	  float diemHoa;
	  float diemTB()
	  {
		  dTB = (diemToan + diemHoa + diemLy) / 3;
		  return dTB;
	  }
	  void xepLoai(int x)
	  {
		  printf("%d\r\n",x);
	  }
	  loai xepLoai()
	  {
		  if (dTB < 5)
			  return YEU;
		  else if ((dTB >= 5) && (dTB < 6.5))
			  return TBINH;
		  else if ((dTB >= 6.5) && (dTB < 8))
			  return KHA;
		  else
			  return GIOI;
	  }

};

void test(char *arr)
{
	printf("%s\r\n", arr);
}
int main()
{
	HocSinh A;
	char* ten = (char*)"nhan";

	memcpy(A.ten, ten, strlen(ten)+1);

A.diemHoa = 8;
	A.diemToan = 9.5;
	A.diemLy = 10;
	float temp = A.diemTB();
	printf("ten: %s\r\n", A.ten);
	printf("diem trung binh: %0.2f\r\n",A.diemTB());
	if (A.xepLoai() == GIOI)
	{
		printf("loai GIOI %d\r\n", A.xepLoai());
	}
	
	A.xepLoai(1);
	test((char*)"abc");
	return 0;
}