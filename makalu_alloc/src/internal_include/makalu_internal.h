#ifndef _MAKALU_INTERNAL_H
#define _MAKALU_INTERNAL_H

#include "makalu_config.h"
#include "makalu_util.h"
#include "makalu_hdr.h"
#include "makalu_base_md.h"


MAK_EXTERN word MAK_page_size;

# define HBLKPTR(objptr) ((struct hblk *)(((word) (objptr)) & ~(HBLKSIZE-1)))



#endif
