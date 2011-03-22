#ifndef _LOOPAES_H
#define _LOOPAES_H

#include <unistd.h>
#include "config.h"

#define LOOPAES_KEYS_MAX 65

int LOOPAES_parse_keyfile(struct crypt_device *cd,
			  struct volume_key **vk,
			  unsigned int *keys_count,
			  char *buffer,
			  size_t buffer_len);

int LOOPAES_activate(struct crypt_device *cd,
		     const char *name,
		     const char *base_cipher,
		     unsigned int keys_count,
		     struct volume_key *vk,
		     const char *hash,
		     uint64_t offset,
		     uint64_t skip,
		     uint32_t flags);
#endif