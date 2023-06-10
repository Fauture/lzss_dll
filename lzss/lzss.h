
__declspec(dllexport) size_t _stdcall Encode(size_t ilen, char* istr, size_t olen, char* ostr);

__declspec(dllexport) char* _stdcall Decode(size_t ilen, unsigned char* istr, size_t* olen);