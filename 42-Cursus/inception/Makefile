CONTAINERS	= $(shell docker ps -qa)
IMAGES		= $(shell docker images -qa)
VOLUMES		= $(shell docker volume ls -q)
NETWORKS	= $(shell docker network ls -q)

all: data up

clean		: down
			@ rm -rf /home/okavak/data
			@ docker rm -f $(CONTAINERS); true;
			@ docker rmi -f $(IMAGES); true;
			@ docker volume rm $(VOLUMES); true;
			@ docker network rm $(NETWORKS) 2> /dev/null; true;
up:
	docker compose -f ./srcs/docker-compose.yml up -d
data:
	mkdir -p /home/okavak/data/db /home/okavak/data/wp
down:
	docker compose -f ./srcs/docker-compose.yml down
cache		: clean
			@ docker system prune -af --volumes
re: cache all

.PHONY: up data down cache clean all
