# Printf #

This project creates a function similar to printf in C programming language. 
It should be able to print characters, string, %, digit.

The output is written to standard output using fprintf(stdout,...);

## Tasks ##

#### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life ####

- Write a function that produces output according to a format.
	- c
	- s
	- %

#### 1. Education is when you read the fine print. Experience is what you get if you don't ####

- Handle the following conversion specifiers:
	- d
	- i

#### 2. With a face like mine, I do better in print ####

- Handle the following custom conversion specifiers:
	- b: the unsigned int argument is converted to binary

#### 3. What one has not experienced, one will never understand in print ####

- Handle the following conversion specifiers:
	- u
	- o
	- x
	- X

#### 4. Nothing in fine print is ever good news ####

- Use a local buffer of 1024 chars in order to call write as little as possible.


#### 5. My weakness is wearing too much leopard print ####

- Handle the following custom conversion specifier:
	- S : prints the string.
	- \x

#### 6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print ####

- Handle the following conversion specifier: p.

#### 7. The big print gives and the small print takes away ####

- Handle the following flag characters for non-custom conversion specifiers:
	- \+
	- space
	- \#
