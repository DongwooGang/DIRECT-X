#pragma once

class Scene final
{
public:
	Scene(class Context* const context);
	~Scene();
	
	void Update();

	auto CreateActor(const bool& is_active = true) -> const std::shared_ptr<class Actor>;
	void AddActor(const std::shared_ptr<class Actor>& actor);

	auto GetActors() const -> const std::vector<std::shared_ptr<class Actor>>& { return actors; }

private:
	class Context* context		= nullptr;
	class Renderer* renderer	= nullptr;
	std::vector<std::shared_ptr<class Actor>> actors;

	bool is_update = true;
};

//Rendering Pipeline
//- IA - VS - RS - PS - OM

//IA : Input Assembler Stage
//- Vertex

//VS : Vertex Shader -> shader : HLSL , GLSL
//- Transform
//Local
//World
//View
//Projection
//Clip	- Homogeneous space - 동차

//RS : Rasterizer
//Clipping
//NDC
//Back-face Culling
//Viewport Transform
//Scan Transform



//- NDC
//NDC	- Euclidean space
//Viewport






//(1, 0, 0, 1)

//w -> 0 -> 방향
//w -> 1 -> 위치


/*

|
|---------------------0------ 4
|
|--------0------------------- 2
|



*/



/*
	DirectX -> API -> GPU


	Rendering Pipeline
	IA -> VS -> RS -> PS -> OM

	IA - Input Assembler
	vertex - 정점

	ID3D11Buffer -> vertex buffer
	ID3D11Buffer -> index buffer 
	ID3D11InputLayout
	D3D11_PRIMITIVE_TOPOLOGY

	VS - Vertex Shader
	- Constnat Buffer

	공간 변환

	- Local - World - View - Projection - Clip -
	
	RS - Rasterizer

	- NDC - Viewport
	- rasterizer state

	PS - Pixel Shader
	Shader Resource

	OM - Output Merger
	- render target
	- blend state



	Resource View
	Buffer          Texture
*/