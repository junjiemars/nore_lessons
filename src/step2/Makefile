
step2_binout := $(bin_path)step2$(bin_ext)

step2: sqrt $(bin_path)step2$(bin_ext)

$(step2_binout): $(src_path)step2.c
	$(LINK) $(step2_lflags) $^ $(bin_out)$@

step2_test: step2
ifeq ($(CC_NAME), msvc)
	PATH=$(lib_path) $(step2_binout) 2
else
	LD_LIBRARY_PATH=$(lib_path) $(step2_binout) 2
endif
