#pragma once
#include "Component.h"

BEGIN(Engine)

class CTerrainTex;
class CTransform;

class ENGINE_DLL CCalculator : public CComponent
{
private:
	explicit CCalculator(LPDIRECT3DDEVICE9 pGraphicDev);
	virtual ~CCalculator();

public:
	HRESULT			Ready_Calculator();
	_float			Compute_HeightOnTerrain(const _vec3* pPos,
		const _vec3* pTerrainVtxPos,
		const _ulong& dwCntX,
		const _ulong& dwCntZ,
		const _ulong& dwVtxItv = VTXITV);

	_vec3			Picking_OnTerrian(HWND hWnd, CTerrainTex* pTerrainBufferCom, CTransform* pTerrainTransCom);

public:
	static CCalculator* Create(LPDIRECT3DDEVICE9 pGraphicDev);
	virtual CCalculator* Clone();

private:
	virtual void Free();
};

END
