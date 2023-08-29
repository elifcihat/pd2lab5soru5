


#include <stdio.h>
#include <string.h>

/*- - Referansa göre çaðrýyý kullanarak öðeleri takas etmek için C'de bir program yazýn.
Test verisi :
1. elemanýn deðerini girin: 5
2. elemanýn deðerini girin: 6
3. elemanýn deðerini girin: 7
Beklenen çýktý :
Deðiþtirmeden önceki deðer:
eleman 1 = 5
eleman 2 = 6
eleman 3 = 7
 
Deðiþtirme iþleminden sonraki deðer:
eleman 1 = 7
eleman 2 = 5
eleman 3 = 6
*/
int main(){
    
    int elemansayisi,i,gecici;
    int *ilk;
	int *ikinci;
    printf("kac tane elaman girmek istersiniz:  ");
    scanf("%d",&elemansayisi);
    int dizi[elemansayisi];
    for(i=0;i<elemansayisi;i++)
    {
    	printf("%d. elemani girin: ",i+1);
    	scanf("%d",&dizi[i]);
	}
	
	printf("degistirmeden once ki deger: \n");
	for(i=0;i<elemansayisi;i++)
	{
		printf("eleman %d = %d\n",i,dizi[i]);
	}
	ilk=ikinci=dizi;
	for(ilk=dizi,ikinci=dizi+elemansayisi-1;ilk<ikinci;ilk++,ikinci--)
	{
		gecici=*ilk;
		*ilk=*ikinci;
		*ikinci=gecici;
	}
	printf("yer degistirdikten sonra : \n");
	for(i=0;i<elemansayisi;i++)
	{
		printf("eleman %d = %d\n",i,dizi[i]);
	}
	
    
    
 
 return 0;
}
