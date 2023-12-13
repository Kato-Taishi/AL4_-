#include "Ground.h"
#include <cassert>


//������
void Ground::Intialize(Model* model) {

	//NULL�|�C���^�`�F�b�N
	assert(model);

	//�����o�ϐ��Ɏ󂯎�����l����
	/*textureHandle_ = textureHandle;*/
	model_ = model;

	//���[���h�ϊ��̏�����
	worldTransform_.Initialize();
}

//�X�V
void Ground::Update() {}

//�`��
void Ground::Draw(const ViewProjection& viewProjection) {
	//3D���f����`��
	model_->Draw(worldTransform_,viewProjection);
}