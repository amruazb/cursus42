CC = cc

CFLAGS = -Wall -Wextra -Werror

SERVER_NAME = server
CLIENT_NAME = client

all: $(SERVER_NAME) $(CLIENT_NAME)

$(CLIENT_NAME): client.c
	$(CC) $(CFLAGS) client.c -o client $(CLIENT_NAME)

$(SERVER_NAME): server.c
	$(CC) $(CFLAGS) server.c -o $(SERVER_NAME)

clean:
	rm -f $(SERVER_NAME) $(CLIENT_NAME)
fclean: clean

re: fclean all


