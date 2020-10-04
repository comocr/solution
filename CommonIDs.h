# ifndef COMMON_IDS_HEADER
# define COMMON_IDS_HEADER

# define UNICODE_FILE_HEADER	0xFEFF
//# define UNICODE_FILE_HEADER_0	0xFE
//# define UNICODE_FILE_HEADER_1	0xFF
# define OCR_ORT_FILE_HDR		0x4852434F		//OCRH
# define INDEX_WIDTH			1
# define INDEX_HEIGHT			2
# define INDEX_N_SECTIONS		3
# define MAX_TEXT_BUFFER_NSIZE	40000
# define MAX_ORT_BUFFER_NSIZE	20000

# define BMP_FILE_EXTN			L"bmp"
# define TXT_FILE_EXTN			L"txt"
# define BAK_FILE_EXTN			L"bak"
# ifndef ORT_FILE_EXTN
# define ORT_FILE_EXTN			L"ort"
# endif
# define HTM_FILE_EXTN			L"htm"
# define GIF_FILE_EXTN			L"gif"

# endif