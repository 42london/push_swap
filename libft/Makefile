# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 20:29:32 by abelov            #+#    #+#              #
#    Updated: 2023/12/28 22:59:25 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:= libft.a
CC				:= cc
CFLAGS			:= -g3 -Wall -Wextra -Werror -Wimplicit -I . -L/usr/lib/debug
CTAGS			:= ctags
LIB_COMMAND		:= ar rcs
RM				:= /bin/rm

LIBFTSRCDIR		= $(CURDIR)
SRCS	 		:=
DIRS			:= gen io std string

include $(addsuffix /Makefile.mk,$(DIRS))

BUILD_DIR		= build
OBJS			= $(SRCS:%.c=%.o)
BUILD_OBJS		= $(SRCS:%.c=$(BUILD_DIR)/%.o)
ASM_FILES		= $(SRCS:.c=.s)

all: $(NAME)

# We need this for the output to go in the right place.  It will default to
# empty if make was configured to work with a cc that can't grok -c and -o
# together.  You can't compile the C library with such a compiler.
OUTPUT_OPTION	= -o $@

$(BUILD_DIR):
		mkdir -pv $(BUILD_DIR) $(patsubst %,$(BUILD_DIR)/%,$(DIRS))

$(BUILD_DIR)/%.o:	%.c
		$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(BUILD_DIR) $(BUILD_OBJS)
		$(LIB_COMMAND) $(NAME) $(BUILD_OBJS)

clean:
		$(RM) -f $(OBJS) $(ASM_FILES)

fclean: clean
		$(RM) -fr $(NAME) $(BUILD_DIR) a.out

re: fclean all

norm:
		@norminette $(SRCS)

.PHONY: all clean flean re bonus $(BUILD_DIR)
