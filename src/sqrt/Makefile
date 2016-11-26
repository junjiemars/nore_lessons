sqrt_objout := $(tmp_path)sqrt$(obj_ext)
sqrt_libout := $(lib_path)libsqrt$(mod_ext)

sqrt: $(sqrt_libout)

sqrt_cflags := $(CFLAGS) $(nm_pic_opt) $(INC) -I$(src_path)
sqrt_ldflags := $(LDFLAGS) 


$(sqrt_objout): $(src_path)sqrt.c 
	$(CC) $(sqrt_cflags) -c $^ $(obj_out)$@
	cp $(src_path)sqrt.h $(inc_path)

$(sqrt_libout): $(sqrt_objout)
	$(CC) $(LFLAGS) $(sqrt_ldflags) $^ $(bin_out)$@
