///////////////////////////////////////////////////////////////////////////////
// tgImgPlugin
//
//
//
///////////////////////////////////////////////////////////////////////////////

#ifndef __TGIMGPLUGIN_H__
#define __TGIMGPLUGIN_H__

///////////////////////////////////////////////////////////////////////////////
// Class definition
///////////////////////////////////////////////////////////////////////////////

#include "windows.h"
#include "tgPlugin.h"
#include "mdttsdk.h"

class tgImgPlugin:public tgPlugin
{
	///////////////////////////////////////////////////////////////////////////
	public:
	///////

	tgImgPlugin(const char* filename);
	~tgImgPlugin();

	int GetPictureInfo(const char* pFileName,tgPictureInfo* pInfo);
	int GetPictureData(uint8* Data,tgColor* Palette);
	char* GetSupportedExt(void);

	///////////////////////////////////////////////////////////////////////////
	protected:
	//////////
	
	typedef	int (*fctGetPictureInfo)(const char*,tgPictureInfo*);
	typedef	int (*fctGetPictureData)(uint8*,tgColor*);
	typedef char* (*fctGetSupportedExt)(void);
	
	fctGetPictureInfo	m_fctGetPictureInfo;
	fctGetPictureData	m_fctGetPictureData;
	fctGetSupportedExt	m_fctGetSupportedExt;
	
	///////////////////////////////////////////////////////////////////////////
	private:
	///////
};

///////////////////////////////////////////////////////////////////////////////

#endif