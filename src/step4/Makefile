
step4_binout := $(bin_path)step4$(bin_ext)

step4: $(step4_binout)

$(step4_binout): $(src_path)step4.c
	$(CC) $^ $(bin_out)$@ $(step4_lflags)

step4_test: step4
	$(step4_binout) 3
