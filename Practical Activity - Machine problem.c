#include <stdio.h>
#define cols 3
#define rows 2


int v(int arr[rows][cols], int username, int pin){
  int v = 0;
  for(int c = 0; c<rows; c++){
if (username == arr[c][0] && pin == arr[c][1]){
 v = 1;
}
}
return v;
}
int main(){
    int arr[rows][cols] = {{160721,1234},{160721,1234},{160721,1234}};
    int username, pin;
    printf("Enter your Id Number:");
    scanf("%d", &username);
    printf("Enter your Pin:");
    scanf("%d", &pin);
    v(arr,username,pin) ? printf("Log.in Successful \nId#:%d",username) : printf("Invalid ID/PIN");
return 0;

}
