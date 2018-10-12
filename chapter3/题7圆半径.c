//设圆半径r=1.5 圆柱高h=3,求圆周长l、面积s、圆球表面积sq、圆球体积vq、圆柱体积vz
//sancf输入数据 取小数点后两位
#include <stdio.h>
int main(){
	float h,r,l,s,sq,vq,vz;
	float pi=3.1415926;
	printf("请输入圆半径人r，圆柱高h:");
	scanf("%f,%f",&r,&h);//输入格式为 1.5，3回车  主语中间逗号
	l=2*pi*r;
	s=pi*r*r;
	sq=4*pi*r*r;
	vq=3/4*pi*r*r*r;
	vz=s*h;
	printf("圆周长为：  l=%6.2f\n",l);
	printf("圆面积为：  s=%6.2f\n",s);
	printf("球表面积为：sq=%6.2f\n",sq);
	printf("球体积为：  vq=%6.2f\n",vq);
	printf("圆柱体积为： vz=%6.2f\n",vz);
}