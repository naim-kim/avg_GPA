#include <stdio.h>
#define SIZE 100

int main() {
    float data[SIZE]; // 각 수업의 평균이 들어갈 array
    int cred, i, j; //수업의 학점
    float grade; //성적 0 ~ 4.5

    int counter = 0, total_creds = 0;
    //counter 은 입력한 수업의 개수 total_creds은 총 학점
    float sum, avg; 
    // 학점 평균 계산법 avg= (sum = 학점*성적 + 학점2*성적2 ...)/ 총학점 
    
    for(i = 0; i<SIZE; i++){ 
        printf("%d 번째 수업의 학점과 성적은 입력하세요: \n",i+1);
        scanf("%d %f", &cred, &grade);

            if (cred>=0 && grade >=0) {
                data[i] = cred*grade; //한 수업의 학점*성적
                counter++;
                total_creds += cred;
            } else
            break;
}
for (j = 0; j < counter; j++) {
    sum += data[j];
    }
    avg = sum/total_creds;
    printf("평균학점: %.2f", avg );
    }
