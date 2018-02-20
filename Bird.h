/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bird.h
 * Author: gpoliakov
 *
 * Created on February 18, 2018, 11:19 AM
 */

#ifndef BIRD_H
#define BIRD_H

#include<cstdlib>
#include"Pet.h"
using namespace std;

class Bird: public Pet{
protected:
    bool b_Nocturnal;  //breed category 
public:
    SetNocturnality(bool b){
        b_Nocturnal = b;
    }
    Bird(string name, string type, unsigned int weight, double price, bool n){  //Constructor
        m_Name = name;
        m_Price = price;
        m_Type = type;
        m_Weight = weight;
        b_Nocturnal = n;
    }
    bool GetNocturnal(){
        return b_Nocturnal;  //
    }
    virtual void print(){
        cout<<"Name:     "<< GetName() << "   Type:   " << GetType();
        cout<<"   Price:     " << GetPrice() << "   Fluffy   " << GetNocturnal();
        cout << endl;
    }
};





#endif /* BIRD_H */

