/*
Let's learn how to create a socket

Steps:
1. Create a socket
2. Bind the socket
3. Listen for connection request
4. Accept the connection request
5. Attempt to establish connection
*/

//!Step 1: Create a socket
#include <sys/socket.h>     //header

/*
Syntax:

!   int socket(int domain, int type, int protocol);

*/

//!Step 2: Binding the socket to a port

#include <sys/socket.h>     //!don't forget header at the start of code

/*
Syntax:

!   int bind(int sockfd, struct sockaddr *myaddr, socklen_t addrlen);

*/

//!Step 3: Listen for connection request

#include <sys/socket.h>     //!i will drill this into my head

/*
Syntax:

int listen(int sockfd, int backlog);

*/

//!Step4: Accept connection request

#include <sys/socket.h>

/*
Syntax:

int accept(int dockfd, struct sockaddr *addr, socklen_t *addrlen);

*/

//!Step 5: Attempt to connect

#include <sys/socket.h>

/*
Syntax:

int connect(int sockfd, struct sockaddr *serv_addr, socklen_t addrlen);
*/