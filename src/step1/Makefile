
step1_binout := $(bin_path)step1$(bin_ext)

step1: $(step1_binout)

$(step1_binout): $(src_path)step1.c
	$(CC) $(CFLAGS) $(INC) -lm $^ $(bin_out)$@
