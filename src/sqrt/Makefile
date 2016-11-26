
sqrt_libout := $(lib_path)libsqrt$(mod_ext)

sqrt: $(sqrt_libout)

sqrt_lflags := $(LFLAGS) $(nm_pic_opt) $(INC) 
sqrt_ldflags := $(LDFLAGS)

$(sqrt_libout): $(src_path)sqrt.c
	cp $(src_path)sqrt.h $(inc_path)sqrt.h
	$(CC) $(step1_lflags) $(sqrt_ldflags) $^ $(bin_out)$@
