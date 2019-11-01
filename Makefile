.PHONY: clean All

All:
	@echo "----------Building project:[ rwa3 - Debug ]----------"
	@cd "rwa3" && "$(MAKE)" -f  "rwa3.mk"
clean:
	@echo "----------Cleaning project:[ rwa3 - Debug ]----------"
	@cd "rwa3" && "$(MAKE)" -f  "rwa3.mk" clean
