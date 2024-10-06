#include <iostream>
#include <conio.h>
using namespace std;

int main() {
 
char nilai;
int angka,nilaiakhir;
float tugas,uts,uas,nilai_akhir;
 
  cout<<" Menghitung Nilai Akhir Mahasiswa"<<endl;
  cout<<" --------------------------------"<<endl;
 
  cout<<" Masukkan Nilai Mahasiswa\n";
  cout<<" Nilai Tugas : ";
  cin>>tugas;
  
  cout<<" Nilai UTS   : ";
  cin>>uts;
 
  cout<<" Nilai UAS   : ";
  cin>>uas;

  if (uts<0||uas<0||tugas<0) {
      cout<<" \nerror value";
      exit (0);
  }
  else if (uts>100||uas>100||tugas>100) {
     cout<<" \nerror value";
     exit (0);
  }
 
nilai_akhir=((tugas*0.3)+(uts*0.3)+(uas*0.4));
 
 if(nilai_akhir>=80&&nilai_akhir<=100){
    nilai ='A';
  }
  else if (nilai_akhir>60&&nilai_akhir<=70){
    nilai ='B';
  }
  else if (nilai_akhir>50&&nilai_akhir<=60 ){
    nilai ='C';
  }
  else if (nilai_akhir>40&&nilai_akhir<=50){
     nilai ='D';
  }
  else if (nilai_akhir>=0&&nilai_akhir<=40){
    nilai ='E';
  }

  
  cout<<endl; 
  cout<<" Nilai_akhir          : "<<nilai_akhir<<endl;
  cout<<" Predikat             : "<<nilai<<endl;

 getch ();
}
