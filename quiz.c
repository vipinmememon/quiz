#include<stdio.h>
void main(){
    FILE *fptr;
    fptr=fopen("student.txt","a");
    char name[20];
    char nam[14];
     printf(" candidate 1.enter your name\n");
    fgets(name,20,stdin);
    int i=7;
    int t=0;
    int t2=0;
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
int p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0,p10=0;
int p01,p02,p03,p04,p05,p06,p07,p08,p09,p010;
    printf("enter 7 for start the game\n");
scanf("%d",&i);
if(i==7){
printf("\nNamste \3 %s ",name);
printf("\n Best of luck !");
printf("\n Lets start the quiz");
printf("\nsome basic rule that are necessary in this game i.e foll0wing\n");
printf("please dont press any invalid key\n");
printf("each candidate have only 5 question\n");
printf("your question is following\n");
}else 
printf("\nended the game\n");
if(i==7){
    printf("\n1. who is the first prime minister of india?\n");
    printf("1).narendra modi\n");
    printf("2).jawahar lal nehru\n");
     printf("3).manmohan singh\n");

    printf("enter your answer\n");
    scanf("%d",&a1);
if(a1==2){
    printf("correct\n");
    p1=2;
    printf("your score is %d\n",p1);
}else { printf("ohh  wronng\n");
p01=0;
printf("your score is %d\n",p01);
printf("try next\n");
}
printf("\n2. which one is the best engine search in internet?\n");
 printf("1).Google\n");
    printf("2).Archie\n");
     printf("3).Wais\n");
     printf("enter your answer\n");
     scanf("%d",&a2);
if(a2==2){
    printf("correct\n");
    p2=2;
    printf("your score is %d\n",p2); 
}
else { printf("ohh wronng\n");
p02=0;
printf("your score is %d\n",p02);
printf("try next\n");
}printf("\n3.In present, who is the chief minister of bihar?\n");
printf("1).Tejpratap yadav\n");
    printf("2).Lalu yadv\n");
     printf("3).Nitish kumar\n");
     printf("enter your answer\n");
     scanf("%d",&a3);
if(a3==3){
    printf("correct\n");
    p3=2;
    printf("your score is %d\n",p3); 
}
else { printf("ohh wronng\n");
p03=0;
printf("your score is %d\n",p03);
printf("try next\n");
}printf("\n4.How many world cup has india won?\n");
printf("1).Two\n");
    printf("2).five\n");
     printf("3).three\n");
     printf("enter your answer\n");
     scanf("%d",&a4);
if(a4==1){
    printf("correct\n");
    p4=2;
    printf("your score is %d\n",p4); 
}
else { printf("ohh wronng\n");
p04=0;
printf("your score is %d\n",p04);
printf("try next\n");
}printf("\n5).Which planet is known as 'RED PLANET' ?\n");
printf("1).jupiter\n");
    printf("2).sun\n");
     printf("3).mars\n");
     printf("enter your answer\n");
     scanf("%d",&a5);
if(a5==3){
    printf("correct\n");
    p5=2;
    printf("your score is %d\n",p5); 
}
else { printf("ohh wronng\n");
p05=0;
printf("your score is %d\n",p05);
printf("try next\n");
}


}
t=p1+p2+p3+p4+p5;
printf("\nyour final score chart \n");
printf("%s total point is %d",name,t);
    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",i);
    fprintf(fptr,"%d\t",a1);
    fprintf(fptr,"%d\t",a2);
    fprintf(fptr,"%d\n",a3);
     fprintf(fptr,"%d\t",a4);
    fprintf(fptr,"%d\n",a5);

   printf("\n\3thank you\n");

//candidate---> 2
     printf("\n\n\n candidate 2. enter your name\n");
    scanf("%s",nam);
 printf("\nenter 7 for start the game\n");
scanf("%d",&i);
if(i==7){
printf("\nNamste \3 %s ",nam);
printf("\n Best of luck !");
printf("\n Lets start the quiz");
printf("\nsome basic rule that are necessary in this game i.e following\n");
printf("please dont press any invalid key\n");
printf("each candidate have only 5 question\n");
printf("your question is following\n");
}else 
printf("\nended the game\n");
if(i==7){
    printf("\n1. who is the first prime minister of india?\n");
    printf("1).narendra modi\n");
    printf("2).jawahar lal nehru\n");
     printf("3).manmohan singh\n");

    printf("enter your answer\n");
    scanf("%d",&a6);
if(a6==2){
    printf("correct\n");
    p6=2;
    printf("your score is %d\n",p6);
}else { printf("ohh  wronng\n");
p06=0;
printf("your score is %d\n",p06);
printf("try next\n");
}
printf("\n2. which one is the best engine search in internet?\n");
 printf("1).Google\n");
    printf("2).Archie\n");
     printf("3).Wais\n");
     printf("enter your answer\n");
     scanf("%d",&a7);
if(a7==2){
    printf("correct\n");
    p7=2;
    printf("your score is %d\n",p7); 
}
else { printf("ohh wronng\n");
p07=0;
printf("your score is %d\n",p07);
printf("try next\n");
}printf("\n3.In present, who is the chief minister of bihar?\n");
printf("1).Tejpratap yadav\n");
    printf("2).Lalu yadv\n");
     printf("3).Nitish kumar\n");
     printf("enter your answer\n");
     scanf("%d",&a8);
if(a8==3){
    printf("correct\n");
    p8=2;
    printf("your score is %d\n",p8); 
}
else { printf("ohh wronng\n");
p08=0;
printf("your score is %d\n",p08);
printf("try next\n");
}printf("\n4.How many world cup has india won?\n");
printf("1).Two\n");
    printf("2).five\n");
     printf("3).three\n");
     printf("enter your answer\n");
     scanf("%d",&a9);
if(a9==1){
    printf("correct\n");
    p9=2;
    printf("your score is %d\n",p9); 
}
else { printf("ohh wronng\n");
p09=0;
printf("your score is %d\n",p09);
printf("try next\n");
}printf("\n5).Which planet is known as 'RED PLANET' ?\n");
printf("1).jupiter\n");
    printf("2).sun\n");
     printf("3).mars\n");
     printf("enter your answer\n");
     scanf("%d",&a10);
if(a10==3){
    printf("correct\n");
    p10=2;
    printf("your score is %d\n",p10); 
}
else { printf("ohh wronng\n");
p010=0;
printf("your score is %d\n",p010);
printf("try next\n");
}

}
t2=p6+p7+p8+p9+p10;
printf("\n final score chat \n");
printf("%s total point is %d",nam,t2);
if(t>=t2){
    printf("\n\nwinner is %s \3\n", name);
    printf("score is %d\t",t);
      int n=t-t2;
    printf("%d marks more",n);
}else
{
    printf("\n\nwinnwer is  %s \3\n",nam);
    printf("\nscore is %d\n",t2);
    int m=t2-t;
    printf("%d marks more",m);
}
 fprintf(fptr,"%s\t",nam);
 fprintf(fptr,"%d\t",i);
    fprintf(fptr,"%d\t",a6);
    fprintf(fptr,"%d\t",a7);
    fprintf(fptr,"%d\t",a8);
     fprintf(fptr,"%d\t",a9);
    fprintf(fptr,"%d\t",a10);
    printf("\n\3thank you\n");
    for(int i=0;i<3;i++){
        printf("\n\3thank you\n");
    }
    fclose(fptr);

}
