//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#ifndef ___PROJECTNAME_______FILEBASENAMEASIDENTIFIER____h
#define ___PROJECTNAME_______FILEBASENAMEASIDENTIFIER____h

#include "cocos2d.h"

class ___VARIABLE_productName:identifier___ : public cocos2d::CCObject
{
public:
	~___VARIABLE_productName:identifier___();
	
	static ___VARIABLE_productName:identifier___& sharedInstance();
    static void purgeInstance();
	
private:
	___VARIABLE_productName:identifier___();

private:
	static ___VARIABLE_productName:identifier___* instance;

};

#endif