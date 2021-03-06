﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/model/ProvisionedCapacity.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{
  class AWS_ELASTICLOADBALANCINGV2_API ModifyProvisionedCapacityResult
  {
  public:
    ModifyProvisionedCapacityResult();
    ModifyProvisionedCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyProvisionedCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ProvisionedCapacity& GetProvisionedCapacity() const{ return m_provisionedCapacity; }

    
    inline void SetProvisionedCapacity(const ProvisionedCapacity& value) { m_provisionedCapacity = value; }

    
    inline void SetProvisionedCapacity(ProvisionedCapacity&& value) { m_provisionedCapacity = std::move(value); }

    
    inline ModifyProvisionedCapacityResult& WithProvisionedCapacity(const ProvisionedCapacity& value) { SetProvisionedCapacity(value); return *this;}

    
    inline ModifyProvisionedCapacityResult& WithProvisionedCapacity(ProvisionedCapacity&& value) { SetProvisionedCapacity(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyProvisionedCapacityResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyProvisionedCapacityResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ProvisionedCapacity m_provisionedCapacity;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
