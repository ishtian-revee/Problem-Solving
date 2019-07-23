#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int queenAttack(int n, int k, int r_q, int c_q, int obstacles[][2]){
    int noOfSquares = 0;
    int left = 0, right = 0, down = 0, top = 0;
    int bottomLeft = 0, bottomRight = 0, topLeft = 0, topRight = 0;
    int bL = 0, tL = 0, bR = 0, tR = 0;

    // getting all possible attacking squares
    noOfSquares += 2 * (n-1);   // for row and column

    // top right diagonal
    if(r_q > c_q){
        noOfSquares += (n - r_q);
    }else if(r_q < c_q){
        noOfSquares += (n - c_q);
    }else{
        noOfSquares += (n - r_q);
    }

    // bottom left diagonal
    if(r_q > c_q){
        noOfSquares += (c_q - 1);
    }else if(r_q < c_q){
        noOfSquares += (r_q - 1);
    }else{
        noOfSquares += (r_q - 1);
    }

    // top left diagonal
    if((r_q + c_q) == (n + 1)){
        noOfSquares += (n - r_q);
    }else if((r_q + c_q) <= n){
        noOfSquares += (c_q - 1);
    }else if((r_q + c_q) > (n+1)){
        noOfSquares += (n - r_q);
    }

    // bottom right diagonal
    if((r_q + c_q) == (n + 1)){
        noOfSquares += (n - c_q);
    }else if((r_q + c_q) <= n){
        noOfSquares += (r_q - 1);
    }else if((r_q + c_q) > (n+1)){
        noOfSquares += (n - c_q);
    }

    for(int i=0; i<k; i++){
        // checking if the obstacles are in the same row
        if(obstacles[i][0] == r_q){     // checking left
            if(obstacles[i][1] < c_q){
                if(obstacles[i][1] >= left){
                    noOfSquares += left;
                    noOfSquares -= obstacles[i][1];
                    left = obstacles[i][1];
                }
            }else{      // checking right
                if(obstacles[i][1] < right){
                    noOfSquares += (n-right+1);
                    noOfSquares -= ((n-obstacles[i][1])+1);
                    right = obstacles[i][1];
                }
                if(right == 0){
                    noOfSquares -= ((n-obstacles[i][1])+1);
                    right = obstacles[i][1];
                }
            }
        }

        // checking if the obstacles are in the same column
        if(obstacles[i][1] == c_q){
            if(obstacles[i][0] < r_q){      // checking down
                if(obstacles[i][0] >= down){
                    noOfSquares += down;
                    noOfSquares -= obstacles[i][0];
                    down = obstacles[i][0];
                }
            }else{      // checking top
                if(obstacles[i][0] < top){
                    noOfSquares += (n-top+1);
                    noOfSquares -= ((n-obstacles[i][0])+1);
                    top = obstacles[i][0];
                }
                if(top == 0){
                    noOfSquares -= ((n-obstacles[i][0])+1);
                    top = obstacles[i][0];
                }
            }
        }

        // checking if the obstacles are in diagonal position
        if((abs(obstacles[i][0] - r_q)) == (abs(obstacles[i][1] - c_q))){
            if(obstacles[i][1] < c_q){          // checking left
                if(obstacles[i][0] < r_q){      // checking bottom
                    if(obstacles[i][0] < obstacles[i][1]){          // checking bottom left 2 diagonal
                        if(obstacles[i][0] >= bL){
                            noOfSquares += bL;
                            noOfSquares -= obstacles[i][0];
                            bL = obstacles[i][0];
                        }
                    }else if(obstacles[i][1] >= bottomLeft){        // checking bottom perfect left and bottom left 1 diagonal
                        noOfSquares += bottomLeft;
                        noOfSquares -= obstacles[i][1];
                        bottomLeft = obstacles[i][1];
                    }
                }else{      // checking top
                    if((abs(obstacles[i][1] - 1)) > (abs(obstacles[i][0] - n))){      // checking top left 2 diagonal
                        if(obstacles[i][0] < tL){
                            noOfSquares += (n-tL+1);
                            noOfSquares -= ((n-obstacles[i][0])+1);
                            tL = obstacles[i][0];
                        }
                        if(tL == 0){
                            noOfSquares -= ((n-obstacles[i][0])+1);
                            tL = obstacles[i][0];
                        }
                    }else if(obstacles[i][1] >= topLeft){         // checking top perfect left and top left 1 diagonal
                        noOfSquares += topLeft;
                        noOfSquares -= obstacles[i][1];
                        topLeft = obstacles[i][1];
                    }
                }
            }else{      // checking right
                if(obstacles[i][0] < r_q){      // checking bottom
                    if((abs(obstacles[i][1] - n)) < (abs(obstacles[i][0] - 1))){    // checking bottom right 2 diagonal
                        if(obstacles[i][1] < bR){
                            noOfSquares += (n-bR+1);
                            noOfSquares -= ((n-obstacles[i][1])+1);
                            bR = obstacles[i][1];
                        }
                        if(bR == 0){
                            noOfSquares -= ((n-obstacles[i][1])+1);
                            bR = obstacles[i][1];
                        }
                    }else if(obstacles[i][0] >= bottomRight){  // checking bottom perfect right and bottom right 1 diagonal
                        noOfSquares += bottomRight;
                        noOfSquares -= obstacles[i][0];
                        bottomRight = obstacles[i][0];
                    }
                }else{      // checking top
                    if((obstacles[i][0] == obstacles[i][1]) || (obstacles[i][0] < obstacles[i][1]) ){   // checking top perfect right and top right 2 diagonal
                        if(obstacles[i][1] < topRight){
                            noOfSquares += (n-topRight+1);
                            noOfSquares -= ((n-obstacles[i][1])+1);
                            topRight = obstacles[i][1];
                        }
                        if(topRight == 0){
                            noOfSquares -= ((n-obstacles[i][1])+1);
                            topRight = obstacles[i][1];
                        }
                    }else if(obstacles[i][0] > obstacles[i][1]){        // checking top right 1 diagonal
                        if(obstacles[i][0] < tR){
                            noOfSquares += (n-tR+1);
                            noOfSquares -= ((n-obstacles[i][0])+1);
                            tR = obstacles[i][0];
                        }
                        if(tR == 0){
                            noOfSquares -= ((n-obstacles[i][0])+1);
                            tR = obstacles[i][0];
                        }
                    }
                }
            }
        }
    }
    return noOfSquares;
}

int main(){
    int n, k, r_q, c_q, result;
    scanf("%d %d", &n, &k);
    int obstacles[k][2];
    scanf("%d %d", &r_q, &c_q);

    for(int i=0; i<k; i++){
        for(int j=0; j<2; j++){
            cin >> obstacles[i][j];
        }
    }
    result = queenAttack(n, k, r_q, c_q, obstacles);
    cout << result << endl;
    return 0;
}
