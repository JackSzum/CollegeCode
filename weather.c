#include<stdio.h>
 
struct Weather {
   double temperature;
   char t_name[12];

} s1 = { 10, "galway" };
 
int main() {
   FILE *fp;
   struct Weather s2;
 
   //Write details of s1 to file
   fp = fopen("home/jack/Desktop/ip.txt", "w");
   fwrite(&s1, sizeof(s1), 1, fp);
   fclose(fp);
 
   fp = fopen("home/jack/Desktop/ip.txt", "r");
   fread(&s2, sizeof(s2), 1, fp);
   fclose(fp);
 
   printf("\nRoll : %d", s2.roll);
   printf("\nName : %s", s2.name);
   printf("\nPercent : %d", s2.percent);
 
   return (0);
}
