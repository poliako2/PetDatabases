/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fish.h
 * Author: gpoliakov
 *
 * Created on February 18, 2018, 11:19 AM
 */

#ifndef FISH_H
#define FISH_H

#include<cstdlib>
#include"Pet.h"
using namespace std;


class Fish: public Pet{
protected:
    string f_environment;  //breed category 
public:
  
    Fish(string name, string type, unsigned int weight, double price, string environment){  //Constructor
        m_Name = name;
        m_Price = price;
        m_Type = type;
        m_Weight = weight;
        f_environment = environment;
    }
    string GetEnvironment(){
        return f_environment;  //
    }
    virtual void print(){
        cout << boolalpha;
        cout<<"Name:     "<< GetName() << "   Type:   " << GetType();
        cout<<"   Price:     " << GetPrice() << "   Environment   " << GetEnvironment();
        cout << endl;
    }
};



#endif /* FISH_H */

