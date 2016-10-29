# For those who don't user Micro$oft Window$
CPP_COMPILER = g++
CPP_OPTIONS  = -c -g -std=c++11
CPP          = $(CPP_COMPILER) $(CPP_OPTIONS)

CPP_LINKER   = g++
LINK_OPTIONS = 
LINK         = $(CPP_LINKER) $(LINK_OPTIONS)

OBJ_DIR      = objects

$(OBJ_DIR)/project5.a: $(OBJ_DIR) \
   $(OBJ_DIR)/main.o \
   $(OBJ_DIR)/style.o \
   $(OBJ_DIR)/anchor.o \
   $(OBJ_DIR)/button.o \
   $(OBJ_DIR)/header.o \
   $(OBJ_DIR)/paragraph.o \
   $(OBJ_DIR)/textbox.o \
   $(OBJ_DIR)/ielement.o \
   $(OBJ_DIR)/webcreator.o
	$(LINK) $(OBJ_DIR)/*.o -o $(OBJ_DIR)/project5.a

$(OBJ_DIR)/main.o: main.cpp webcreator.h $(OBJ_DIR)
	$(CPP) -o $(OBJ_DIR)/main.o main.cpp

$(OBJ_DIR)/style.o: style.cpp style.h ielement.h $(OBJ_DIR)
	$(CPP) -o $(OBJ_DIR)/style.o style.cpp

$(OBJ_DIR)/anchor.o: anchor.cpp anchor.h ielement.h $(OBJ_DIR)
	$(CPP) -o $(OBJ_DIR)/anchor.o anchor.cpp

$(OBJ_DIR)/button.o: button.cpp button.h ielement.h $(OBJ_DIR)
	$(CPP) -o $(OBJ_DIR)/button.o button.cpp

$(OBJ_DIR)/header.o: header.cpp header.h ielement.h $(OBJ_DIR)
	$(CPP) -o $(OBJ_DIR)/header.o header.cpp

$(OBJ_DIR)/paragraph.o: paragraph.cpp paragraph.h ielement.h $(OBJ_DIR)
	$(CPP) -o $(OBJ_DIR)/paragraph.o paragraph.cpp

$(OBJ_DIR)/textbox.o: textbox.cpp textbox.h ielement.h $(OBJ_DIR)
	$(CPP) -o $(OBJ_DIR)/textbox.o textbox.cpp

$(OBJ_DIR)/ielement.o: ielement.cpp ielement.h $(OBJ_DIR)
	$(CPP) -o $(OBJ_DIR)/ielement.o ielement.cpp

$(OBJ_DIR)/webcreator.o: webcreator.cpp \
   webcreator.h \
   style.h \
   anchor.h \
   paragraph.h \
   header.h \
   textbox.h \
   button.h \
   $(OBJ_DIR)
	$(CPP) -o $(OBJ_DIR)/webcreator.o webcreator.cpp

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)
