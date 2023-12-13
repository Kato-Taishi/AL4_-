#include "Skydome.h"
#include <cassert>


//������
void Skydome::Initialize(Model* model) {

	//NULL�|�C���^�`�F�b�N
	assert(model);

	//�����o�ϐ��Ɏ󂯎�����l����
	model_ = model;

	//���[���h�ϊ��̏�����
	worldTransform_.Initialize();
}

//�X�V
void Skydome::Update() {}

//�`��
void Skydome::Draw(const ViewProjection& viewProjectio) {
	//3D���f����`��
	model_->Draw(worldTransform_, viewProjection);
}


