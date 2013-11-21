#ifndef WIN_IMAGE_H__
#define WIN_IMAGE_H__

#include <windows.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct win_image win_image;

win_image * win_image_from_file(const TCHAR *file_path);
win_image * win_image_from_buffer(void *buf, UINT buf_size);
win_image * win_image_from_resource(HMODULE hinst, int resource_id);
void        win_image_delete(win_image *img);
void        win_image_blit_at(win_image *img, HDC dc, int x, int y);

#ifdef __cplusplus
}
#endif

#endif
