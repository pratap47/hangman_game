//
//  Hangman.cpp
//  OOPS Project
//
//  Created by Aameer, Amir, Aakash, Chetan, Sonali on 02/11/18.
//  Copyright © 2018 OOPS Project. All rights reserved.
//

#include <iostream>
#include<bits/stdc++.h>
#include "Files.h"
using namespace std;
void Wrong_Pattern(int);
int *alpha = new int[0];
int alphasize = 0;
int t = 0;
int cor = 0;
int wc = 0;
class Base
{
public:
     int* search(string str, char f)
     {
     	 int size = 0, record = 0;
        int *arr = new int[size];
        for(int i = 0; i<str.length(); i++)
        {
            if(str[i] == f)
            {
                record++;
                int oldsize = size;
                size++;
                t = size;
                int* newarr = new int[size];
                std::copy(arr, arr + std::min(oldsize, size), newarr);
                delete[] arr;
                arr = newarr;
                arr[size-1] = i;
            }
        }
        if(record == 0)
        {
            size = 1;
            int *temp = new int(size);
            temp[0] = -1;
            delete[] arr;
            arr = temp;
        }
        return arr;
    }
     	
	 
     int check(char f)
     {
     	
        int record = 0;
        for(int i = 0; i < alphasize; i++)
        {
            if(alpha[i] == f)
            {
                record++;
            }
        }
        if(record == 0)
        {
            int oldsize = alphasize;
            alphasize++;
            int* newarr = new int[alphasize];
            std::copy(alpha, alpha + std::min(oldsize, alphasize), newarr);
            delete[] alpha;
            newarr[alphasize-1] = f;
            alpha = newarr;
            return 0;
        }
        else
        {
            return 1;
        }
	 }
};
class Cars : public Base
{      
};
class Animals : public Base
{

};
class Countries : public Base
{

};
class Movies : public Base
{
   
};
class Brands : public Base
{
    
};
void Wrong_Pattern(int wrong_count)
{
    int i;
    if(wrong_count == 1)
    {
        for(i = 1; i <= 13; i++)
        {
            cout << "|" << endl ;
        }
    }
    else if(wrong_count == 2)
    {
        cout << " _ _ _ _ _ _" << endl ;
        for(i = 1; i <= 13; i++)
        {
            cout << "|" << endl ;
        }
    }
    else if(wrong_count == 3)
    {
        cout << " _ _ _ _ _ _" << endl ;
        cout << "|           |" << endl ;
        for(i = 1; i <= 11; i++)
        {
            cout << "|" << endl ;
        }
    }
    else if(wrong_count == 4)
    {
        cout << " _ _ _ _ _ _" << endl ;
        cout << "|           |" << endl ;
        cout << "|          ---" << endl ;
        cout << "|          \\_/" << endl ;
        for(i = 1; i <= 9; i++)
        {
            cout << "|" << endl ;
        }
    }
    else if(wrong_count == 5)
    {
        cout << " _ _ _ _ _ _" << endl ;
        cout << "|           |" << endl ;
        cout << "|          ---" << endl ;
        cout << "|          \\_/" << endl ;
        cout << "|           |" << endl ;
        cout << "|           |" << endl ;
        cout << "|           |" << endl ;
        cout << "|           |" << endl ;
        for(i = 1 ; i <= 5 ; i++)
            cout << "|" << endl ;
    }
    else if(wrong_count == 6)
    {
        cout << " _ _ _ _ _ _" << endl ;
        cout << "|           |" << endl ;
        cout << "|          ---" << endl ;
        cout << "|          \\_/" << endl ;
        cout << "|         \\ |" << endl ;
        cout << "|          \\| " << endl ;
        cout << "|           |" << endl ;
        cout << "|           |" << endl ;
        for(i = 1 ; i <= 6 ; i++)
            cout << "|" << endl ;
    }
    else if(wrong_count == 7)
    {
        cout << " _ _ _ _ _ _" << endl ;
        cout << "|           |" << endl ;
        cout << "|          ---" << endl ;
        cout << "|          \\_/" << endl ;
        cout << "|         \\ | /" << endl ;
        cout << "|          \\|/ " << endl ;
        cout << "|           |" << endl ;
        cout << "|           |" << endl ;
        for(i = 1 ; i <= 5 ; i++)
            cout << "|" << endl ;
    }
    else if(wrong_count == 8)
    {
        cout << " _ _ _ _ _ _" << endl ;
        cout << "|           |" << endl ;
        cout << "|          ---" << endl ;
        cout << "|          \\_/" << endl ;
        cout << "|         \\ | /" << endl ;
        cout << "|          \\|/ " << endl ;
        cout << "|           |" << endl ;
        cout << "|           |" << endl ;
        cout << "|          / " << endl ;
        cout << "|         / "  << endl ;
        for(i = 1; i <= 3 ; i++)
        {
            cout << "|" << endl ;
        }
    }
    else
    {
        cout << " _ _ _ _ _ _" << endl ;
        cout << "|           |" << endl ;
        cout << "|          ---" << endl ;
        cout << "|          \\_/" << endl ;
        cout << "|         \\ | /" << endl ;
        cout << "|          \\|/ " << endl ;
        cout << "|           |" << endl ;
        cout << "|           |" << endl ;
        cout << "|          / \\ " << endl ;
        cout << "|         /   \\ "  << endl ;
        for(i = 1; i <= 3 ; i++)
        {
            cout << "|" << endl ;
        }
    }
}
int main()
{
    cout << " Welcome to Hangman game. " << endl ;
    cout << "   Categories : " << endl ;
    cout << "1. Press 1 for Cars " << endl ;
    cout << "2. Press 2 for Animals " << endl ;
    cout << "3. Press 3 for Countries " << endl ;
    cout << "4. Press 4 for Movies " << endl ;
    cout << "5. Press 5 for Brands " << endl ;
    cout << " Enter the number for the Category You have Chosen " << endl ;
    int c;
    cin >> c ;
    switch(c)
    {
        case 1:
        {
            cout << " Generating a Hint related to a Car for you. " << endl ;
            create_cars();
            int n;
            n = (rand() % 10) + 1;
            int i;
            char str_hint[100];
            char str_ans[100];
            ifstream fincars1;
            ifstream fincars2;
            fincars1.open("cars_hint.txt");
            fincars2.open("cars_ans.txt");
            for(i=1;i<=n;i++)
            {
                fincars1.getline(str_hint,100);
            }
            cout << str_hint << endl;
            for(i=1;i<=n;i++)
            {
                fincars2.getline(str_ans,100);
            }
            Cars obj1;
            int s;
            char ch;
            string dis;
        label:
            cout << "Please enter any character between A-Z" << endl;
        again:
            cin >> ch;
            s = obj1.check(ch);
            if(s == 1)
            {
                cout << "Please choose other character other than " << ch << endl;
                goto again;
            }
            else
            {
                int *res = obj1.search(str_ans,ch);
                if(res[0] == -1)
                {
                    wc++;
                    Wrong_Pattern(wc);
                }
                else
                {
                    for(int i = 0; i < t; i++)
                    {
                        dis[res[i]] = ch;
                        cor++;
                    }
                }
                for(int i = 0; i < strlen(str_ans); i++)
                {
                    cout << dis[i] << " ";
                }
                cout << endl ;
                if(cor == strlen(str_ans))
                    cout << "You Won! You guessed it right!" << endl;
                else if(wc != 9)
                    goto label;
                else if(wc == 9)
                    cout << "You lost!" << endl;
                else if(cor != strlen(str_ans))
                    goto label;
            }
            break;
        }
        case 2:
        {
            cout << " Generating a Hint related to an Animal for you. " << endl ;
            create_animals();
            int n;
            n = (rand() % 10) + 1;
            int i;
            char str_hint[100];
            char str_ans[100];
            ifstream fincars1;
            ifstream fincars2;
            fincars1.open("animals_hint.txt");
            fincars2.open("animals_ans.txt");
            for(i=1;i<=n;i++)
            {
                fincars1.getline(str_hint,100);
            }
            cout << str_hint << endl;
            for(i=1;i<=n;i++)
            {
                fincars2.getline(str_ans,100);
            }
            Cars obj1;
            int s;
            char ch;
            string dis;
        label2:
            cout << "Please enter any character between A-Z" << endl;
        again2:
            cin >> ch;
            s = obj1.check(ch);
            if(s == 1)
            {
                cout << "Please choose other character other than " << ch << endl;
                goto again2;
            }
            else
            {
                int *res = obj1.search(str_ans,ch);
                if(res[0] == -1)
                {
                    wc++;
                    Wrong_Pattern(wc);
                }
                else
                {
                    for(int i = 0; i < t; i++)
                    {
                        dis[res[i]] = ch;
                        cor++;
                    }
                }
                for(int i = 0; i < strlen(str_ans); i++)
                {
                    cout << dis[i] << " ";
                }
                cout << endl ;
                if(cor == strlen(str_ans))
                    cout << "You Won! You guessed it right!" << endl;
                else if(wc != 9)
                    goto label2;
                else if(wc == 9)
                    cout << "You lost!" << endl;
                else if(cor != strlen(str_ans))
                    goto label2;
            }
            break;
        }
        case 3:
        {
            cout << " Generating a Hint related to a Country for you. " << endl ;
            create_countries();
            int n;
            n = (rand() % 10) + 1;
            int i;
            char str_hint[100];
            char str_ans[100];
            ifstream fincars1;
            ifstream fincars2;
            fincars1.open("countries_hint.txt");
            fincars2.open("countries_ans.txt");
            for(i=1;i<=n;i++)
            {
                fincars1.getline(str_hint,100);
            }
            cout << str_hint << endl;
            for(i=1;i<=n;i++)
            {
                fincars2.getline(str_ans,100);
            }
            Cars obj1;
            int s;
            char ch;
            string dis;
        label3:
            cout << "Please enter any character between A-Z" << endl;
        again3:
            cin >> ch;
            s = obj1.check(ch);
            if(s == 1)
            {
                cout << "Please choose other character other than " << ch << endl;
                goto again3;
            }
            else
            {
                int *res = obj1.search(str_ans,ch);
                if(res[0] == -1)
                {
                    wc++;
                    Wrong_Pattern(wc);
                }
                else
                {
                    for(int i = 0; i < t; i++)
                    {
                        dis[res[i]] = ch;
                        cor++;
                    }
                }
                for(int i = 0; i < strlen(str_ans); i++)
                {
                    cout << dis[i] << " ";
                }
                cout << endl ;
                if(cor == strlen(str_ans))
                    cout << "You Won! You guessed it right!" << endl;
                else if(wc != 9)
                    goto label3;
                else if(wc == 9)
                    cout << "You lost!" << endl;
                else if(cor != strlen(str_ans))
                    goto label3;
            }
            break;
        }
        case 4:
        {
            cout << " Generating a Hint related to a Movie for you. " << endl ;
            create_movies();
            int n;
            n = (rand() % 10) + 1;
            int i;
            char str_hint[100];
            char str_ans[100];
            ifstream fincars1;
            ifstream fincars2;
            fincars1.open("movies_hint.txt");
            fincars2.open("movies_ans.txt");
            for(i=1;i<=n;i++)
            {
                fincars1.getline(str_hint,100);
            }
            cout << str_hint << endl;
            for(i=1;i<=n;i++)
            {
                fincars2.getline(str_ans,100);
            }
            Cars obj1;
            int s;
            char ch;
            char dis[100];
            for(int i=0;i<strlen(str_ans);i++){
            	dis[i]='_';
			}
        label4:
            cout << "Please enter any character between A-Z" << endl;
        again4:
            cin >> ch;
            s = obj1.check(ch);
            if(s == 1)
            {
                cout << "Please choose other character other than " << ch << endl;
                goto again4;
            }
            else
            {
                int *res = obj1.search(str_ans,ch);
                if(res[0] == -1)
                {
                    wc++;
                    Wrong_Pattern(wc);
                }
                else
                {
                    for(int i = 0; i < t; i++)
                    {
                        dis[res[i]] = ch;
                        cor++;
                    }
                }
                for(int i = 0; i < strlen(str_ans); i++)
                {
                    cout << dis[i] << " ";
                }
                cout << endl ;
                if(cor == strlen(str_ans))
                    cout << "You Won! You guessed it right!" << endl;
                else if(wc != 9)
                    goto label4;
                else if(wc == 9)
                    cout << "You lost!" << endl;
                else if(cor != strlen(str_ans))
                    goto label4;
            }
            break;
        }
        case 5:
        {
            cout << " Generating a Hint related to a Brand for you. " << endl ;
            create_cars();
            int n;
            n = (rand() % 10) + 1;
            int i;
            char str_hint[100];
            char str_ans[100];
            ifstream fincars1;
            ifstream fincars2;
            fincars1.open("brands_hint.txt");
            fincars2.open("brands_ans.txt");
            for(i=1;i<=n;i++)
            {
                fincars1.getline(str_hint,100);
            }
            cout << str_hint << endl;
            for(i=1;i<=n;i++)
            {
                fincars2.getline(str_ans,100);
            }
            Cars obj1;
            int s;
            char ch;
            string dis;
        label5:
            cout << "Please enter any character between A-Z" << endl;
        again5:
            cin >> ch;
            s = obj1.check(ch);
            if(s == 1)
            {
                cout << "Please choose other character other than " << ch << endl;
                goto again5;
            }
            else
            {
                int *res = obj1.search(str_ans,ch);
                if(res[0] == -1)
                {
                    wc++;
                    Wrong_Pattern(wc);
                }
                else
                {
                    for(int i = 0; i < t; i++)
                    {
                        dis[res[i]] = ch;
                        cor++;
                    }
                }
                for(int i = 0; i < strlen(str_ans); i++)
                {
                    cout << dis[i] << " ";
                }
                cout << endl ;
                if(cor == strlen(str_ans))
                    cout << "You Won! You guessed it right!" << endl;
                else if(wc != 9)
                    goto label5;
                else if(wc == 9)
                    cout << "You lost!" << endl;
                else if(cor != strlen(str_ans))
                    goto label5;
            }
            break;
        }
        default:
        {
            cout << "Wrong Choice" << endl;
            cout << "Please Choose between 1 to 5" << endl;
            break;
        }
    }
}
