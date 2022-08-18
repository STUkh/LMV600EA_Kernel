/*
 * Copyright (c) 2012, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

enum {
    LGE_MQA_ENABLE = 0,
	LGE_MQA_POWERMODE,
	LGE_MQA_MULTIPLERATE,
	LGE_MQA_OUTPUTMODE,
	LGE_MQA_PROPERTIES,
	LGE_MQA_PARAM_MAX
};

struct asm_lge_mqa_param {
    int32_t                  value;
} __packed;

int q6asm_set_lge_mqa_param(struct audio_client *ac, int param_id, int value);