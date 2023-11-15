#pragma once

#include "Model.h"
#include "WorldTransform.h"

class Player {
public:
	//������
	void Initialize(Model* model, uint32_t textureHandle);
	//�X�V
	void Update();
	//�`��
	void Draw(const ViewProjection& viewProjection);



private:
	//���[���h�ϊ��f�[�^
	WorldTransform worldTransform_;
	//���f��
	Model* model_ = nullptr;
	//�@�e�N�X�`���n���h��
	uint32_t textureHandle_ = 0u;
};