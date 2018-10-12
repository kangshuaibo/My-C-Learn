// 张秋建《算经》中提出“百鸡问题”：鸡翁一值钱五，母鸡一值钱三，鸡雏三值钱一，百钱买百鸡，问鸡翁、母、雏各几何？

/*分析：cocks+hens+chicks=100
       5 * cocks   +   3 * hens +  hicks/3=100
       这是三元两方程解不唯一

其中：0<chocks<19  0<hens<33  0<chicks<100

思路：依次取chock的值域中的值，然后求其余两数，看是否合乎题意。

算法描述：
cocks=0
  	当cocks<19时{
	找满足题意的hens，checks数
	cocks+1
     }
}
细化：
cocks=0
  	当cocks<19时{
  		hens=0
  		当hens<33时{
  		找满足题意的checks数
  		hens+1
  		}
	cocks+1
     }
}
进一步细化：
cocks=0
  	当cocks<19时{
  		hens=0
  		当hens<33时{
  		chicks=100-cocks-hens
  		如果（5*cocks + 3*hens + hicks/3=100）则输出
  		hens+1
  		}
	cocks+1
     }
}
*/
#include <stdio.h>
#include <math.h>
int main()
{int cocks=0,hens,chicks;
 while(cocks<=19)
   {
 	hens=0;
 	while(hens<=33)
 	{
 		chicks=100-cocks-hens;
 		if(5*cocks+3*hens+chicks/3==100)
 			printf("%d %d %d\n",cocks,hens,chicks );
 		hens++;
 	}
 	cocks++;
   }

}




















 