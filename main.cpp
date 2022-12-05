#include <iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<string> 
#include <cmath>
using namespace std;
int main() {
  char fie,tos,dia,dif_res,cong_nas,dol_cab,dol_mus;
  int urg,uci,uce,h_urg,h_uci,h_uce,tol_pac,cant_res,vida,his_cli,n1,n2,n3,n4,n5,n6;
  float por_urg,por_uci,por_uce,c_urg,c_uci,c_uce,tmr,valor,peso_gr,cost,cost_res,c_res_tol,vida_util,vida_util2,vida_util3,peso_kilo,peso_li,descu,V_descu1,V_descu2,cost_uci,cost_uce;
  string refe,nom;
  double recargo;
  //COMIENZO DEL PROBLEMA AREAS DE URGENCIAS EN LA CLINICA
  cout<<"por favor responder en MAYUSCULA "<<endl;
  do{
  cout<<"\na presentado Fiebre  [S-SI N-NO P-POSIBLEMENTE] : ";
  cin>>fie;
  } while(!(fie=='S' ||fie=='N'||fie=='P' ));
  do{
  cout<<"a presentado Tos  [S-SI N-NO P-POSIBLEMENTE]: ";
  cin>>tos;
  } while(!(tos=='S' ||tos=='N'||tos=='P' ));
  do{
  cout<<"a presentado Diarrea [S-SI N-NO P-POSIBLEMENTE]: ";
  cin>>dia;
  }while (!(dia=='S' ||dia=='N'||dia=='P' ));
  do{
  cout<<"a presentado Dificultad para respirar                            [S-SI N-NO P-POSIBLEMENTE] : ";
  cin>>dif_res;
  }while(!(dif_res=='S' ||dif_res=='N'||dif_res=='P' ));
  do{
  cout<<"a presentado Congestion nasal [S-SI N-NO  P-POSIBLEMENTE] : ";
  cin>>cong_nas;
  }while(!(cong_nas=='S' ||cong_nas=='N'||cong_nas=='P' ));
  do{
  cout<<"a presentado Dolor de cabeza [S-SI N-NO  P-POSIBLEMENTE] : ";
  cin>>dol_cab;
  }while (!(dol_cab=='S' ||dol_cab=='N'||dol_cab=='P' )); 
  do{
  cout<<"a presentado Dolor muscular [S-SI N-NO  P-POSIBLEMENTE] : ";
  cin>>dol_mus;
  }while(!(dol_mus=='S' ||dol_mus=='N'||dol_mus=='P' ));
 if(toupper(fie && tos && dif_res && cong_nas && dol_cab && dol_mus=='S' && dia=='N')){
 cout<<"\nSu diagnostico es  enfermedad respiratoria"<<endl;
 cout<<"\nSu tratamiento es Tomar bebidas calientes. Tomar medicamentos para la tos. Tomar analgésico. Cubrirse bien si va a salir de casa. Inhalarse si es necesario"<<endl;
 } 
 else if(fie && tos  && cong_nas && dol_cab && dol_mus=='S' && dia && dif_res=='N'){
 cout<<"\nSu diagnostico es resfriado"<<endl;
 cout<<"\nSu tratamiento es Evitar bebidas frías. Tomar medicamentos o jarabe para la tos. Cubrirse bien si va a salir de casa."<<endl;
 }
 else if(fie && tos=='S' && dia && dif_res && cong_nas=='N' && dol_cab && dol_mus=='P'){
 cout<<"\nSu diagnostico es gripe"<<endl;
 cout<<"\nSu tratamiento es Evitar bebidas frías. No salir en la noche. Tomar jarabe para la tos. Tomar medicamentos"<<endl;
 }
  else if(fie && dif_res && tos=='S' && dol_cab && dol_mus=='N' && dia && cong_nas=='P'){
 cout<<"\n\tSu diagnostico es COVID-19"<<endl;
 cout<<"\n\tSu tratamiento es Quedarse en casa.  Tomar analgésicos. Mucho descanso. Tomar líquidos. Y si te complicas ir al hospital nuevamente."<<endl;
 }
 else {
 cout<<"\n\tEnfermedad comun.Nada grave"<<endl;
 cout<<"Quedarse en casa, no entendemos que hace en urgencias."<<endl;
 }  
 //final del problema de las areas de  als clinicas
 //COMIENZO DEL PROBLEMA HABITACIONES DE LA CLINICA
 do{
 cout<<"\ncuantos pacientes hay en la zona de urgencias:";
 cin>>urg;
 } while(!(urg>0));
 do{
 cout<<"cuantos pacientes hay en la zona de Unidad de Cuidados intensivos (UCI): ";
 cin>>uci;
 }while(!(uci>0));
 do{
 cout<<"cuantos pacientes hay en la zona de Unidad de cuidados especiales (UCE):";
 cin>>uce;
 }while(!(uce>0));
 do{
 cout<<"\ndigite el total de horas del paciente en urgencias: ";
 cin>>h_urg;
 } while(!(h_urg>=1 && h_urg<=360));
 do{
 cout<<"digite el total de horas del paciente en la zona de Unidad de Cuidados intensivos (UCI) : ";
 cin>>h_uci;
 }while(!(h_uci>=1 && h_uci<=360));
 do{
 cout<<"digite el total de horas del paciente en la zona de Unidad de cuidados especiales (UCE)  : ";
 cin>>h_uce;
 }while(!(h_uce>=1 && h_uce<=360));
 do{
 cout<<"\ndigite el costo por hora por cama en la zona de urgencias: ";
 cin>>c_urg;
 }while(!(c_urg>=200000 && c_urg<=800000));
 do{
 cout<<"digite el costo por hora por cama en la zona de Unidad de Cuidados intensivos (UCI): ";
 cin>>c_uci;
 }while(!(c_uci>=200000 && c_uci<=800000));
 do{
 cout<<"digite el costo por hora por cama en la zona de Unidad de cuidados especiales (UCE): ";
 cin>>c_uce;
 }while(!(c_uce>=200000 && c_uce<=800000));
 tol_pac= urg+ uci+uce;
 por_urg= (float)tol_pac/urg*100;
 por_uci= (float)tol_pac/uci*100;
 por_uce= (float)tol_pac/uce*100;
 cout<<"\nel numero total de pacientes es de: "<<tol_pac<<endl;
 cout<<"el porcentaje de pacientes en la zona de urgencias es de: "<<por_urg<<endl;
 cout<<"el porcentaje de pacientes en la zona de Unidad de Cuidados intensivos (UCI) es de: "<<por_uci<<endl;
 cout<<"el porcentaje de pacientes en la zona de Unidad de cuidados especiales (UCE) es de: "<<por_uce<<endl;
 if( h_uci>=0 && h_uci<=95){
  recargo=5000000;
  cost_uci=uci*h_uci*c_uci + recargo;
 cout<<"dinero que cuestan las personas areas (UCI): "<<cost_uci<<endl;
 }
 else if(h_uci>=96 &&h_uci==143){
  recargo=1000000;
  cost_uci=uci*h_uci*c_uci + recargo;
 cout<<"dinero que cuestan las personas areas (UCI): "<<cost_uci<<endl;
 }
 else if(h_uci>=144 && h_uci<=191){
  recargo= 1500000;
  cost_uci=uci*h_uci*c_uci + recargo;
 cout<<"dinero que cuestan las personas areas (UCI): "<<cost_uci<<endl;
 }
 else if(h_uci>=192 && h_uci<=239){
  recargo=2000000;
  cost_uci=uci*h_uci*c_uci + recargo;
 cout<<"dinero que cuestan las personas areas (UCI): "<<cost_uci<<endl;
 }
 else if(h_uci>=240 && h_uci<=287){
 recargo= 2500000 ;
 cost_uci=uci*h_uci*c_uci + recargo;
 cout<<"dinero que cuestan las personas areas (UCI): "<<cost_uci<<endl;
 }
 else if(h_uci==288 && h_uci<=360){
 recargo= 3000000;
 cost_uci=uci*h_uci*c_uci + recargo;
 cout<<"dinero que cuestan las personas areas (UCI): "<<cost_uci<<endl;
 }
  else{
 cout<<"horas no registradas"<<endl;
  }
 if(h_uce>=0 && h_uce<=95){
 recargo=200000;
 cout<<"dinero que cuestan las personas areas (UCE): "<<cost_uce<<endl;
 }
 else if(h_uce>=96 &&h_uce<=143){
 recargo=400000;
  cout<<"dinero que cuestan las personas areas (UCE): "<<cost_uce<<endl;
 }
 else if(h_uce>=144 &&h_uce<=191){
  recargo=600000;
  cout<<"dinero que cuestan las personas areas (UCE): "<<cost_uce<<endl;
 }
 else if(h_uce>=192 && h_uce<=239){
  recargo=800000;
  cout<<"dinero que cuestan las personas areas (UCE): "<<cost_uce<<endl;
 }
 else if(h_uce>=240 && h_uce<=287){
 recargo=1000000;
  cout<<"dinero que cuestan las personas areas (UCE): "<<cost_uce<<endl;
 }
 else if(h_uce>=288 && h_uce<=360){
  recargo=1200000; 
  cout<<"dinero que cuestan las personas areas (UCE): "<<cost_uce<<endl;
 }
 else
 cout<<"horas no registradas"<<endl;
 

 //final del problema habitaciones de la clinica
 //COMIENZO DEL PROBLEMA AREA DE RECURSOS
 do{
 cout<<"\ndigite la referencia del respirador a comprar: ";
 cin>>refe;
 } while(!(refe=="N88"|| refe=="N90"|| refe=="N92"|| refe=="N96"|| refe=="N99"|| refe=="N00"));
 do{
 cout<<"cantidad de respirador a comprar: ";
 cin>>cant_res;
 }while(!(cant_res>0));
 cout<<"usted tiene un descuento de: " <<(cant_res>=20?  descu=0.202:descu=0.077)<<endl;
 do{
 cout<<"digite el TMR [3000-4000]: ";
 cin>>tmr;
 }while (!(tmr>=3000 && tmr<=4000));
 if (refe=="N88"){
  valor=6.250;
  vida=200;
  peso_gr=1250.0;
 }
  else if (refe=="N90"){
  valor=7.750;
  vida=280;
  peso_gr=1640.3;
 }
  else if (refe=="N92"){
  valor=8.050;
  vida=350;
  peso_gr=1887.5;
 }
  else if (refe=="N96"){
  valor=8.550;
  vida=400;
  peso_gr=2398.8;
 }
  else if (refe=="N99"){
  valor=9.000;
  vida=420;
  peso_gr=2645.5;
 }
  else if (refe=="N00"){
  valor=10.520;
  vida=500;
  peso_gr=2800.0;
 }
 else{
 cout<<"referencia mo encontrada"<<endl;
 }
 cost_res=valor;
 c_res_tol=(cost_res*cant_res)-V_descu1;
 vida_util= vida/12;
 vida_util2=vida_util*52;
 vida_util3=vida_util*365;
 peso_kilo=peso_gr/1000;
 peso_li=peso_gr/454;
 V_descu1=valor*descu;
 V_descu2=(valor*descu)*tmr;
 cout<<"\nel costo de cada respirador es de U$: "<<cost_res<<endl;
 cout<<"valor del descuento U$: "<<V_descu1<<endl;
 cout<<"el costo total de todos los respiradores es de U$: "<<c_res_tol<<endl; 
 cout<<"\nel costo de cada respirador en pesos colombianos es de: "<<cost_res*tmr<<endl;
 cout<<"valor del descuento en pesos colombianos es de: "<<V_descu2<<endl;
 cout<<"el costo total de todos los respiradores en pesos colombianos es de: "<<c_res_tol*tmr<<endl; 
 cout<<"\nla vida util en años del respirador es de: "<<vida_util<<endl;
 cout<<"la vida util en meses del respirador es de: "<<vida<<endl;
 cout<<"la vida util en semanas del respirador es de: "<<vida_util2<<endl;
 cout<<"la vida util en dias del respirador es de: "<<vida_util3<<endl;
 cout<<"\nel peso en gramos es de: "<<peso_gr<<endl;
 cout<<"el peso en kilogramos es de: "<<peso_kilo<<endl;
 cout<<"el peso en libras es de: "<<peso_li<<endl;
 //final del problema areas de recursos
 //COMIENZO DEL PROBLEMA NUEVA AREA
 //EL DIRECTOR DE LA CLINICA QUIERES SABER LA ORGANIZACIÓN DEL HISTORIAL CLINICO DE LA CLINICA Y POR ESO DECIDE QUE LOS HISTORIALES CLINICO DE LO AÑOS (2016,2017,2018)  SE CLASIFICA COMO VIEJOS Y LOS HISTORIALES CLINICOS DE LOS AÑOS(2019,2020,2021) SE CLASIFICAN COMO NUEVO.Y TAMBIEN QUIERES SACAR UNA CAMPAÑA DE 3 JORNADAS PARA UN SERVICIO COMUNITARIO Y PARA ESO NECESITA TRABAJADORES PARA ESA CAMPAÑA Y DECIDE LLAMARLOS PARA QUE ESCOJAN UN NUMNERO ALEATORIO DONDE SI LE SALE 1-SI VA ALA PRIMERA JORNADA DE LA CAMPAÑA ,2- NO VA ALA PRIMERA JORNADA DE LA CAMPAÑA,3- SI VA ALA SEGUNDA JORNADA DE LA CAMPAÑA 4- NO VA ALA SEGUNDA JORNADA DE LA CAMPAÑA,5- SI VA ALA TERCERA JORNADA DE LA CAMPAÑA,6- NO VA ALA TERCERA JORNADA DE LA CAMPAÑA.
 cout<<"\ndigite el año de la historia clinica: ";
 cin>>his_cli;
 cout<<"nombre completo del paciente: ";
 cin>>nom;
 getline(cin,nom);
 if( his_cli==2016 ||his_cli==2017 ||his_cli==2018 ){
 cout<<nom<<" "<<"historia clinica antigua"<<endl;
 }
 else if( his_cli==2019 ||his_cli==2020 ||his_cli==2021 ){
 cout<<nom<<" "<<"historia clinica nueva"<<endl;
 }
 else{
 cout<<"historial clinica no encontrada "<<endl;
 }
 cout<<"\ngire la ruleta ";
 n1=1+rand()%6;
 switch(n1){
 case 1: cout<<n1<<"\n-"<<"si va ala primera jornada de la campaña "<<endl;break;
 case 2: cout<<n1<<"\n-"<<"no va ala primera jornada de la campaña "<<endl;break;
 case 3: cout<<n1<<"\n-"<<"si va ala segunda jornada de la campaña "<<endl;break;
 case 4:cout<<n1<<"\n- "<<"no va ala segunda jornada de la campaña "<<endl;break;
 case 5: cout<<n1<<"\n-"<<"si va ala tercera jornada de la campaña "<<endl;break;
 case 6:cout<<n1<<"\n-"<<"no va ala tercera jornada de la campaña "<<endl;break;
 } 
 return 0;
}