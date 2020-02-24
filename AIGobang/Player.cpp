//
//  Player.cpp
//  AIGobang
//
//  Created by Meidi on 18/4/25.
//  @authors Di Mei, Joseph Huang, Crystal Wang, Lindsay Ning
//

#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

int Player::getX(){
    while (true) {
        cout << "x position input: ";
        cin >> x;
        if (x<15 && x>0) {
            return x;
            break;
        }else{
            cout << "Invalid Input" << endl;
        }
    }
}

int Player::getY(){
    while (true) {
        cout << "y position input: ";
        cin >> y;
        if (y<15 && y>0) {
            return y;
            break;
        }else{
            cout << "Invalid Input" << endl;
        }
    }
}

void Player::setChess(char board[15][15]){
    board[x][y]=notation2;
}

