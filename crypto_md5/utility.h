#pragma once
void centerWindow(POINT*);
void getFileNameFromPath(TCHAR *fullPath, TCHAR *fileName);
TCHAR *shortenPath(TCHAR *);
void separateNameAndExt(TCHAR *fullPath, TCHAR *ext);