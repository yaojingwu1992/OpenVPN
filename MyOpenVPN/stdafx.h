// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // �� Windows ͷ���ų�����ʹ�õ�����
#endif


#include <afx.h>
#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <atlbase.h>


// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include <comdef.h>//��ʼ��һ��com��
#ifndef ULONG_PTR
#define ULONG_PTR unsigned long*
#include "GdiPlus.h"
using namespace Gdiplus;
#endif
#pragma comment(lib,"gdiplus.lib")