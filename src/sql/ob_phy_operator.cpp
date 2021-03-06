/**
 * (C) 2010-2012 Alibaba Group Holding Limited.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * Version: $Id$
 *
 * ob_phy_operator.cpp
 *
 * Authors:
 *   Junquan Chen <jianming.cjq@taobao.com>
 *
 */

#include "ob_phy_operator.h"

using namespace oceanbase;
using namespace sql;

DEFINE_SERIALIZE(ObPhyOperator)
{
  UNUSED(buf);
  UNUSED(buf_len);
  UNUSED(pos);
  return common::OB_NOT_IMPLEMENT;
}

DEFINE_DESERIALIZE(ObPhyOperator)
{
  UNUSED(buf);
  UNUSED(data_len);
  UNUSED(pos);
  return common::OB_NOT_IMPLEMENT;
}

DEFINE_GET_SERIALIZE_SIZE(ObPhyOperator)
{
  return common::OB_NOT_IMPLEMENT;
}

PHY_OPERATOR_ASSIGN(ObPhyOperator)
{
  UNUSED(other);
  return common::OB_NOT_IMPLEMENT;
}

