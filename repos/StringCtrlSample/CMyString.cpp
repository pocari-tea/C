#include "pch.h"
#include "CMyString.h"
#include <cstddef>


CMyString::CMyString()
	: m_pszData(NULL)
	, m_nLength(0)
{
}


CMyString::~CMyString()
{
	Release();
}


int CMyString::SetString(const char* pszParam)
{
	// TODO: 여기에 구현 코드 추가.
	Release();

	if(pszParam == NULL)
		return 0;

	int nLength = strlen(pszParam);

	if (nLength == 0)
		return 0;

	m_pszData = new char[nLength + 1];

	strcpy_s(m_pszData, sizeof(char)* (nLength + 1), pszParam);
	m_nLength = nLength;

	return nLength;
}


const char* CMyString::GetString(void) const
{
	// TODO: 여기에 구현 코드 추가.
	return m_pszData;
}


void CMyString::Release()
{
	// TODO: 여기에 구현 코드 추가. 
	if (m_pszData != NULL)
		delete[] m_pszData;

	m_pszData = NULL;
	m_nLength = 0;
}
