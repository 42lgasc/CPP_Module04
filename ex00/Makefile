# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgasc <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 18:19:19 by lgasc             #+#    #+#              #
#    Updated: 2024/10/17 23:29:31 by lgasc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Polymorphism
MAIN			= main.cpp
DEFINITIONS		= #METHOD_INFO=false SPECIAL_INFO=false
CLASSES			= Animal Dog Cat WrongAnimal WrongDog WrongCat #$(NAME)
SOURCES			= $(addsuffix .cpp, $(CLASSES)) #$(MAIN)
HEADERS			= $(addsuffix .hpp, $(CLASSES))
DEPENDENCY		= dependency.d#$(addsuffix .d, $(NAME))
DEP				= $(DEPENDENCY)
#LDLIBS			+= -lreadline
#LIBFT			= libft/libft.a
#LIB_ARCHIVES	= $(LIBFT)
#OBJECTS		= $(SOURCES:.c=.o) $(LIB_ARCHIVES)
OBJECTS			= $(SOURCES:.cpp=.o) $(LIB_ARCHIVES)

CPPFLAGS		= $(addprefix -D, $(DEFINITIONS))

# https://stackoverflow.com/a/56290397/22306298
CCFLAGS			+= -Wall -Wstrict-overflow=5 \
	-Wextra -Wmissing-format-attribute -g -Wshadow \
	-Wnull-dereference -Wattributes -Werror \
	-Wpedantic -Wnonnull -Wmissing-noreturn #-fPIE

GCCFLAGS		+= -Wduplicated-cond -Wattribute-alias=2 \
	-Wsuggest-attribute=malloc -Wsuggest-attribute=pure \
	-Wsuggest-attribute=const -Wsuggest-attribute=cold \
	-Wsuggest-attribute=noreturn -Wduplicated-branches \
	-Wsuggest-attribute=format -Wstringop-overflow=4

CLANGFLAGS		+= -Wproperty-attribute-mismatch

CFLAGS			+= -Wsuggest-attribute=returns_nonnull $(CCFLAGS)
ifeq ($(CC), gcc)
 CFLAGS			+= $(GCCFLAGS)
else ifeq ($(CC), clang)
 CFLAGS			+= $(CLANGFLAGS)
endif

CXXFLAGS		+= -std=c++98 $(CCFLAGS)
ifeq ($(CXX), g++)
 CXXFLAGS		+= $(GCCFLAGS)
else ifeq ($(CXX), clang++)
 CXXFLAGS		+= $(CLANGFLAGS)
endif


RESET			= \033[0m
#BOLD			= \033[1m
#FAINT			= \033[2m
#REGULAR		= \033[22m
#ITALIC			= \033[3m
#ROMAN			= \033[23m
#BLACK_FORE		= \033[30m
#OLIVE_FORE		= \033[33m
#DEFAULT_FORE	= \033[39m
#DEFAULT_BOTH	= \033[39;49m
#OLIVE_BACK		= \033[43m
#GREY_FORE		= \033[90m
#WHITE_FORE		= \033[97m
LOW_SCRIPT		= \033[22;23;30m
L_C				= $(LOW_SCRIPT)
# Loose inspiration from a gnu head
GNU_SCRIPT		= \033[2;3;90m
G_C				= $(GNU_SCRIPT)
GNU_STYLE		= \033[2;3;43;90m
G_Y				= $(GNU_STYLE)
# Warning sCript
W_C				= \033[1;32m
# Warning stYle, poison colours
W_Y				= \033[1;32;45m
BACKQUOTE		= `#`# Vim acts funny when a variable contains one.
REMOVING_START	= '$(G_Y)Removing $(BACKQUOTE)$(L_C)'
RM_S			= $(REMOVING_START)
REMOVING_MORE	= '$(G_C)$(BACKQUOTE), $(BACKQUOTE)$(L_C)'
RM_M			= $(REMOVING_MORE)
REMOVING_END	= '$(G_C)$(BACKQUOTE)...$(RESET)'
RM_E			= $(REMOVING_END)

DIRT			= 'TODO|FIXME|XXX|(?<!'\'')\?|\?(?!'\'')|! ?!|DEPREC\w*$\
				  |[Dd]eprec\w*|(?:w?c)?log|(?<![/:])/([*/])(?! |!|\1)$\
				  |(?:[^\t]{0,2}\t|....){20}(?=.)$\
				  |\b(?!$(LABEL_ALLOW))[A-Z_a-z]+:(?![":])'
LABEL_ALLOW		= By|Created|Updated|https$\
				  |public|protected|private|default|c_[a-z]+
CAMEL_TO_SCREAM	= 's/[^A-Za-z]/_/g;s/([A-Z])([A-Z][a-z])/\1_\2/g;$\
				  s/([a-z])([A-Z])/\1_\2/g;s/.*/\U\0/'



.PHONY:	all re clean fclean

all:		$(NAME)

$(NAME):	$(MAIN) $(OBJECTS) #$(DEP) #$(MAIN) $(OBJECTS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(MAIN) $(OBJECTS) $(LDLIBS) --output $(NAME)
	-norminette
	-grep -PRn $(DIRT) --colour=auto --include='*.[cht]pp' --include='*.[ch]' \
	 --exclude='*.[cht]pp.[ch]' || echo '$(G_Y)No dirt found.$(RESET)'
	-for h in $$(find * -name \*.h -o -name '*.[ht]pp'); \
	 do g=$$(echo $$h|sed -E $(CAMEL_TO_SCREAM)); if ! grep -q $$g $$h; \
	   then e=+; echo '$(W_Y)Header guard `$(L_C)'$$g'$(W_C)` not found in' \
	    '`$(L_C)'$$h'$(W_C)`!$(RESET)'; fi done; if [ -z $$e ]; \
	 then echo '$(G_Y)All header guards seems present.$(RESET)'; fi

clean:		
	#$(MAKE) -C $(dir $(LIBFT)) fclean
	for o in $(OBJECTS); \
	 do if [ -f $$o ]; then if [ -z $$rm ]; then echo -n $(RM_S)$$o; \
	   else echo -n $(RM_M)$$o; fi; rm=+; rm $$o; fi done; if [ -n ''$$rm ]; \
	 then echo $(RM_E); else echo '$(G_Y)No object file to remove.$(RESET)'; fi
	if [ -z "$(filter re, $(MAKECMDGOALS))"]; \
	 then if [ -f $(DEP) ]; then echo $(RM_S)$(DEP)$(RM_E); rm $(DEP); \
	  else echo '$(G_Y)No dependency file to remove.$(RESET)'; fi fi

fclean:		clean
	if [ -f $(NAME) ]; then echo $(RM_S)$(NAME)$(RM_E); rm $(NAME); \
	 else echo '$(G_Y)No executable to remove.$(RESET)'; fi

re:			fclean all

# Prevent unnecessary inclusion
# 	https://www.gnu.org/software/make/manual/make#index-MAKECMDGOALS
# 	Note how this inclusion remains a requirement of `re`.
ifeq "$(filter clean fclean, $(MAKECMDGOALS))" ""
 include $(DEP)
endif

$(DEP):		$(MAIN) $(SOURCES)
	$(RM) $@
	for s in $^; do $(CC) -MM $$s>>$@; done
	echo -e '$(G_Y)Dependency file `$(L_C)$@$(G_C)` made.$(RESET)'
	 # This is the only place where `-e` is necessary. Why?

$(LIBFT):	
	$(MAKE) -C $(dir $@) #bonus


# Use `CC=...` or `CXX=...` instead.
#test:		$(OBJECTS)
#	- clang	$(CFLAGS) $(OBJECTS) $(LDLIBS)
#	- gcc	$(CFLAGS) $(OBJECTS) $(LDLIBS)
#	$(CC)	$(CFLAGS) $(OBJECTS) $(LDLIBS)

#$(SOURCES:.c=.o):	$@
#	echo '@$@ <$< ?$? ^$^'

# https://www.gnu.org/software/make/manual/make.html#Catalogue-of-Rules
# https://www.gnu.org/software/make/manual/make.html#Suffix-Rules
#%.o: %.cpp %.hpp
#	$(CXX) -c $(CPPFLAGS) $(CXXFLAGS) -o $@ $<
