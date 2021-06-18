#include <stdio.h>
#include<math.h>
void NhapMang(int a[],int n) 
{
    int i;
        for(i=0; i<n; i++) 
        {
            printf("Nhap phan tu a[%d]: ",i);
            scanf("%d",&a[i]);
            printf("\n");
        }

}
void XuatMang(int a[],int n) 
{
    printf("Cac phan tu da nhap vao la:\n\n");
    int i;
    for(i=0; i<n; i++) 
        {
            printf("a[%d] = %d\n",i,a[i]);
            printf("\n");
        }

}
void GaTriTB(int a[], int n)
{
    int i;
    int value;
    value=0;
    for(i=0;i<n;i++)
    {
        value = a[i] +value;
    }
    value= value/n;
    printf("==================Gia tri trung binh cua mang la: %d",value);
    printf("\n\n");
}
void GiaTriLN(int a[], int n)
{
    int i;
    int value;
    value=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>value)
        {
            value=a[i];
        }
    }
    printf("========================Gia tri lon nhat trong mang la: %d",value);
    printf("\n\n");
}
void ViTriChan(int a[], int n)
{
    int i;
    int value;
    value=0;
    printf("===========================Danh sach cac phan tu nam o vi tri chan trong mang:\n\n");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            value=a[i];
            printf("%d ",value);
            printf("vi tri a[%d]",i);
            printf("\n\n");
        }
    }
}
void PhanTuDuong(int a[],int n)
{
    int i;
    int value=0;
    int counts=0;
    for(i=0;i<n;i++)
    {
        value=a[i];
        if(value>=0)
        {
            counts = counts +1;
        }
    }
    printf("==========================So phan tu duong trong mang la: %d",counts);
    printf("\n");
}
void CountX(int a[], int n)
{
    int count =0, x;
    printf("\n====================Nhap phan tu can dem: ");
    scanf("%d",&x);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        count ++;
    }
    printf("====================Phan tu %d xuat hien %d lan",x,count);
    printf("\n\n");
}
void FindX(int a[], int n)
{
    int x;
    printf("============================Nhap phan tu can tim vi tri: ");
    scanf("%d",&x);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("===========================Phan tu %d nam o vi tri a[%d] trong mang",x,i);
            printf("\n\n");
        }
    }
}
void GiaTriNN(int a[], int n)
{
    int i;
    int value;
    value=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<value)
        {
            value=a[i];
        }
    }
    printf("=================================Gia tri nho nhat trong mang la: %d",value);
    printf("\n\n");
}
bool KtraSNT(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int SNT(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (KtraSNT(a[i]))
        {
            dem++;
        }
    }
    return dem;
}
int main()
{
    int n,chon;
    int a[n];
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d",&n);
    printf("\n");
    NhapMang(a, n);
    do{
    printf("2.Xuat Mang\n3.Gia tri TB\n4.Gia Tri LonNhat\n5.Vi tri Chan\n6.Dem so phan tu duuong trong mang\n7.Dem so lan phan tu X xuat hien\n8.Nhap x tim vi tri x trong mang\n9.Tim vi tri phan tu nho nhat trong mang\n10.Dem so nguyen to\nMoi ban nhap lua chon:");
    scanf("%d",&chon);
    switch(chon)
    {
   	case 2:
		    XuatMang(a, n);
		    break;
   	case 3:
		    GaTriTB(a, n);
		    break;	
   	case 4:
		    GiaTriLN(a,n);
		    break;
   	case 5:
		    ViTriChan(a,n);
		    break;
	case 6:
		   PhanTuDuong(a,n);
		   break;
	case 7:
		    CountX(a,n);
		    break;
	case 8:
		    FindX(a,n);
		    break;
	case 9:
		    GiaTriNN(a,n);
		    break;
	case 10:
		printf("==========================So luong Snt la:%d\n",SNT(a,n));
		    break;
     default:chon=0; 
	 break;
           }
       }while(chon!=0);    
    return 0;
}