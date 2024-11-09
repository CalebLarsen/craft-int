.PHONY: all
all:
	./generate_ast.bash
	@gradle app:run -q --console=plain

samples: SAMPLE_LIST
	@./run_samples.bash
	
