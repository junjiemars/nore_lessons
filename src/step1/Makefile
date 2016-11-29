
step1_binout := $(bin_path)step1$(bin_ext)

step1: $(step1_binout)

step1_lflags += $(LFLAGS) $(INC)
ifeq ($(CC_NAME), gcc)
	step1_lflags += -lm
endif

$(step1_binout): $(src_path)step1.c
	$(CC) $^ $(bin_out)$@ $(step1_lflags) 

step1_test: step1
	$(step1_binout) 2
	
