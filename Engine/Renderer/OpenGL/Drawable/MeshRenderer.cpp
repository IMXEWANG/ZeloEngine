// MeshRenderer.cpp
// created on 2021/3/31
// author @zoloypzuo
#include "ZeloPreCompiledHeader.h"
#include "MeshRenderer.h"

using namespace Zelo::Core::RHI;

MeshRenderer::MeshRenderer(Zelo::Core::ECS::Entity &owner) : Component(owner) {

}

MeshRenderer::~MeshRenderer() = default;

void MeshRenderer::render(Shader *shader) {
    shader->setUniformMatrix4f("World", m_owner.getWorldMatrix());

    m_material->bind();
    m_mesh->render();
}

void MeshRenderer::SetMesh(GLMesh &mesh) {
    m_mesh = &mesh;
}

void MeshRenderer::SetMaterial(Material &material) {
    m_material = &material;
}
