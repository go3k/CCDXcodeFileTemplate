//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#include "___FILEBASENAME___.h"

using namespace cocos2d;

___VARIABLE_productName:identifier___* ___VARIABLE_productName:identifier___::instance = NULL;

___VARIABLE_productName:identifier___& ___VARIABLE_productName:identifier___::sharedInstance()
{
    if (!instance)
    {
        instance = new ___VARIABLE_productName:identifier___();
    }
    
    return *instance;
}

void ___VARIABLE_productName:identifier___::purgeInstance()
{
    if (instance)
    {
        delete instance;
        instance = NULL;
    }
}

___VARIABLE_productName:identifier___::___VARIABLE_productName:identifier___()
:CCObject()
{
    
}

___VARIABLE_productName:identifier___::~___VARIABLE_productName:identifier___()
{

}

