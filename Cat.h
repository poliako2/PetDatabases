/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cat.h
 * Author: gpoliakov
 *
 * Created on February 18, 2018, 11:19 AM
 */

#include"Pet.h"
#include<string>
#include<iostream>
using namespace std;
#ifndef CAT_H
#define CAT_H


#include"Pet.h"
using namespace std;

class Cat: public Pet{
protected:
    bool c_Fluffy;  //breed category 
    using Pet::m_Name;
    using Pet::m_Price;
    using Pet::m_Type;
    using Pet::m_Weight;
    using Pet::GetName;
    using Pet::GetPrice;
    using Pet::GetType;
    using Pet::GetWeight;

public:
    
    Cat(string name, string type, unsigned int weight, double price, bool f){  //Constructor
        m_Name = name;
        m_Price = price;
        m_Type = type;
        m_Weight = weight;
        c_Fluffy = f;
      
    }
    bool GetFluffy(){
        return c_Fluffy;  //
    }
    virtual void print(){
        cout<<"Name:     "<< GetName() << "   Type:   " << GetType();
        cout<<"   Price:     " << GetPrice() << "   Fluffy   " << GetFluffy();
        cout << endl;
    }
};

#endif /* CAT_H */

